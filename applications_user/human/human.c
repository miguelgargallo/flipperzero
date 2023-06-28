/***************************|
| o                       o |
| o myFlipperApps         o |
| o by MiguelGargallo     o |
| o 002 - Horizontal Move o |
| o Version: 3.0.0b       o |
| o Date: 06-28-2023      o |
| o                       o |
****************************/

#include <stdio.h>
#include <furi.h>
#include <gui/gui.h>

// Starting position at the center center
// static int position[] = {64, 32};
// Starting position at the bottom center
// static int position[] = {64, 64};
// Starting position at the bottom left
static int position[] = {0, 64};

static char currentSymbol[] = "x"; // The symbol to be displayed

static void drawGui(Canvas *canvas, void *context)
{
    UNUSED(context);
    canvas_clear(canvas);

    // Draw the currentSymbol
    canvas_set_font(canvas, FontPrimary);
    canvas_draw_str(canvas, position[0], position[1], currentSymbol);
}

static void handleInput(InputEvent *input_event, void *context)
{
    FuriMessageQueue *event_queue = context;
    furi_assert(event_queue != NULL);

    bool longPress = (input_event->type == InputTypeLong) ? true : false;
    int step = longPress ? 2 : 1; // Move 2 positions if long pressed, 1 otherwise

    switch (input_event->key)
    {
    case InputKeyLeft:
        position[0] -= step;
        break;
    case InputKeyRight:
        position[0] += step;
        break;
    default:
        // Do nothing for other keys
        break;
    }

    // Bounds check
    if (position[0] < 0)
        position[0] = 0;
    if (position[0] > 126)
        position[0] = 126; // 128 pixels, adjust as necessary

    furi_message_queue_put(event_queue, input_event, FuriWaitForever);
}

// Main function of the app
int32_t human_main(void *parameter)
{
    UNUSED(parameter);

    // Create an event queue and a viewport for GUI
    InputEvent input_event;
    FuriMessageQueue *event_queue = furi_message_queue_alloc(8, sizeof(InputEvent));
    ViewPort *viewport = view_port_alloc();

    // Error checking
    if (!event_queue || !viewport)
    {
        printf("Error: Failed to allocate event_queue or viewport!\n");
        return -1;
    }

    // Set callbacks for drawing GUI and handling input
    view_port_draw_callback_set(viewport, drawGui, NULL);
    view_port_input_callback_set(viewport, handleInput, event_queue);

    // Create a GUI and associate it with the viewport
    Gui *gui = furi_record_open(RECORD_GUI);
    gui_add_view_port(gui, viewport, GuiLayerFullscreen);

    // Main event loop
    while (true)
    {
        // Check the queue for events
        FuriStatus status = furi_message_queue_get(event_queue, &input_event, FuriWaitForever);
        furi_check(status == FuriStatusOk);

        // Exit the loop if the back button is long-pressed
        if (input_event.type == InputTypeLong && input_event.key == InputKeyBack)
        {
            break;
        }
    }

    // Cleanup: free resources and close GUI record
    furi_message_queue_free(event_queue);
    gui_remove_view_port(gui, viewport);
    view_port_free(viewport);
    furi_record_close(RECORD_GUI);

    return 0;
}
