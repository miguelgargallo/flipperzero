# FlipperZero | Ultimate compile guide

es: FlipperZero | Guía de definitiva para compilar apps en FlipperZero

- [FlipperZero | Ultimate compile guide](#flipperzero--ultimate-compile-guide)
    - [Installation](#installation)
    - [Create the app](#create-the-app)
    - [Code](#code)
    - [Compile](#compile)
    - [Run](#run)
    - [Clean and compile](#clean-and-compile)
  - [Features](#features)
    - [🔄 Go back button screen](#-go-back-button-screen)
    - [⏺️ Go center button screen](#️-go-center-button-screen)
    - [⬇️ Go down button screen](#️-go-down-button-screen)
    - [⬅️ Go left button screen](#️-go-left-button-screen)
    - [⬆️ Go up button screen](#️-go-up-button-screen)
    - [➡️ Go right button screen](#️-go-right-button-screen)
  - [License](#license)

![Miguel Gargallo How to deploy Flipper Zero Apps](https://repository-images.githubusercontent.com/659406324/9c80b562-0837-4187-87c7-74663e6b0d1b)

### Installation

```powershell
git clone --recursive https://github.com/DarkFlippers/unleashed-firmware
```

The go to the folder

es: Luego ve a la carpeta.

```bash
cd unleashed-firmware
```

Execute `./fbt`

es: Ejecuta `./fbt`.

```powershell
./fbt
```

### Create the app

Then you will see this log on console log from the [log](./other/01.log)

es: Luego verás este registro en el registro de la consola desde el [log](./other/01.log).

We put the code inside the folder applications_user/my_first_app.

es: Ponemos el código dentro de la carpeta applications_user/mi_primera_app.

### Code

Inside my_first_app we add 2 files:

es: Dentro de mi_primera_app agregamos 2 archivos:

- [my_first_app.c](./my_first_app/my_first_app.c)
- [application.fam](./my_first_app/application.fam)

### Compile

Now we can compile the app:

es: Ahora podemos compilar la aplicación:

```powershell
./fbt fap_dist
```

Then you will see this log on console log from the [log](./other/02.log)

es: Luego verás este registro en el registro de la consola desde el [log](./other/02.log).

`D:/unleashed-firmware/build/latest/.extapps/my_first_app.fap` will need to drag and drop to the qFlipper.

![my_first_app on FlipperZero device drag and drop to qFlipper on Windows](https://github.com/miguelgargallo/flipperzero/assets/5947268/edeef69d-c199-44b8-95bb-6ec34da50cf8)

### Run

Then we go to the FlipperZero device, Applications `Examples` folder and we will see the app.

es: Luego vamos al dispositivo FlipperZero, a la carpeta de `Ejemplos` de Aplicaciones y veremos la aplicación.

`? my_first_app`

![initial screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/6489b090-f3dc-4e11-8e71-3f15df953508)

We click on it and we will see the app running.

es: Hacemos clic en ella y veremos la aplicación en funcionamiento.

### Clean and compile

If you want to clean to compile later, you can do it with:

es: Si quieres limpiar para compilar más tarde, puedes hacerlo con:

```powershell
./fbt -c fap_my_first_app
```

And then you perform that action:

es: Y luego realizas esa acción:

```powershell
./fbt fap_dist
```

## Features
On  tap, any button it interacts, with this you can create a 🐉 dragon game or an app using this features ✨!

es: En tocar, cualquier botón interactúa, con esto puedes crear un juego de 🐉 dragones o una aplicación que use estas características ✨!

### 🔄 Go back button screen
![🔄 Go back button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/6a770138-e112-4eba-b6e4-42a982d5b88b)
### ⏺️ Go center button screen
![⏺️ Go center button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/16898974-d275-47e3-9e75-3125b525e02d)
### ⬇️ Go down button screen
![⬇️ Go down button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/4d091dc5-1b42-4245-9db6-94e7a31d11d1)
### ⬅️ Go left button screen
![⬅️ Go left button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/7145b41d-be90-472b-a835-daa7bff2cfcd)
### ⬆️ Go up button screen
![⬆️ Go up button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/611605f4-b26f-4715-875e-f5d93e2e0af4)
### ➡️ Go right button screen
![➡️ Go right button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/20ab20f1-7a43-479e-b852-9a8f3636f557)

## License

[PYLAR AI CREATIVE ML LICENSE](License.md)
[OFFICIAL REFERENCE](https://huggingface.co/spaces/superdatas/LICENSE)
