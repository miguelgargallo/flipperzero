/***************************|
| o                       o |
| o myFlipperApps         o |
| o by MiguelGargallo     o |
| o 002 - Button          o |
| o Version: 3.0.0b       o |
| o Date: 06-28-2023      o |
| o                       o |
****************************/

#include <stdio.h>
#include <furi.h>
#include <gui/gui.h>

// Create messages to display based on user input
static char *message = "Press any button...";
static char *exitMessage = "";
static char numberMessage[2] = ""; // Create a new message string for numbers

// Create a variable to keep track of long press count
static int longPressCount = 0;

// Function to clear canvas and draw GUI elements
static void drawGui(Canvas *canvas, void *context)
{
    UNUSED(context);
    canvas_clear(canvas);

    // Draw the primary label
    canvas_set_font(canvas, FontPrimary);
    canvas_draw_str(canvas, 32, 13, "My First App");

    // Draw the secondary label
    canvas_set_font(canvas, FontSecondary);
    canvas_draw_str(canvas, 15, 40, message);
    canvas_draw_str(canvas, 15, 55, exitMessage); // Exit message

    // Draw the number message
    canvas_draw_str(canvas, 65, 32, numberMessage); // Number message

    // Draw a line
    canvas_draw_line(canvas, 2, 23, 126, 23);
}

// Function to handle user input
static void handleInput(InputEvent *input_event, void *context)
{
    FuriMessageQueue *event_queue = context;
    furi_assert(event_queue != NULL);

    // Check if the button was long-pressed or not
    bool longPress = (input_event->type == InputTypeLong) ? true : false;

    // Change the message depending on which key was pressed
    switch (input_event->key)
    {
    case InputKeyUp:
        message = longPress ? "You long-pressed ^^^" : "You pressed ^";
        break;
    case InputKeyDown:
        message = longPress ? "You long-pressed vvv" : "You pressed v";
        break;
    case InputKeyLeft:
        message = longPress ? "You long-pressed <<<" : "You pressed <";
        break;
    case InputKeyRight:
        message = longPress ? "You long-pressed >>>" : "You pressed >";
        break;
    case InputKeyOk:
        message = longPress ? "You long-pressed ooo" : "You pressed o";
        break;
    case InputKeyBack:
        message = longPress ? "You long-pressed ---" : "You pressed -";
        exitMessage = longPress ? "Exiting the App." : "Long press to exit.";
        break;
    default:
        message = "Press any button...";
    }

    // Update the longPressCount and numberMessage based on the type of press
    if (longPress)
    {
        longPressCount++;
        switch (longPressCount)
        {
        case 1:
            snprintf(numberMessage, sizeof(numberMessage), "1");
            break;
        case 2:
            snprintf(numberMessage, sizeof(numberMessage), "2");
            break;
        case 3:
            snprintf(numberMessage, sizeof(numberMessage), "3");
            break;
        }
    }
    else
    {
        longPressCount = 0;      // Reset the count on a short press
        numberMessage[0] = '\0'; // Clear the string
    }

    furi_message_queue_put(event_queue, input_event, FuriWaitForever);
}

// Main function of the app
int32_t button_main(void *parameter)
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
