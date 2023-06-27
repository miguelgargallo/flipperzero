# My Flipper Apps

- [My Flipper Apps](#my-flipper-apps)
  - [How to successfully deploy](#how-to-successfully-deploy)
  - [my\_first\_app](#my_first_app)
    - [Installation](#installation)
  - [Features](#features)
    - [🔄 Go back button screen](#-go-back-button-screen)
    - [⏺️ Go center button screen](#️-go-center-button-screen)
    - [⬇️ Go down button screen](#️-go-down-button-screen)
    - [⬅️ Go left button screen](#️-go-left-button-screen)
    - [⬆️ Go up button screen](#️-go-up-button-screen)
  - [License](#license)

## How to successfully deploy

es: Mis Apps de Flipper.

![Miguel Gargallo How to deploy Flipper Zero Apps](https://repository-images.githubusercontent.com/659406324/9c80b562-0837-4187-87c7-74663e6b0d1b)

Here goes all my Flipper Apps.

es: Aquí están todas mis Apps de Flipper.

## my_first_app

A simple app that shows a text and a button to quit the app.

es: Una aplicación sencilla que muestra un texto y un botón para salir de la aplicación.

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

Then you will see this log on console log from the [log](./other/01.log)

es: Luego verás este registro en el registro de la consola desde el [log](./other/01.log).

We put the code inside the folder applications_user/my_first_app.

es: Ponemos el código dentro de la carpeta applications_user/mi_primera_app.

Inside my_first_app we add 2 files:

es: Dentro de mi_primera_app agregamos 2 archivos:

- [my_first_app.c](./my_first_app/my_first_app.c)
- [application.fam](./my_first_app/application.fam)

Now we can compile the app:

es: Ahora podemos compilar la aplicación:

```powershell
./fbt fap_dist
```

Then you will see this log on console log from the [log](./other/02.log)

es: Luego verás este registro en el registro de la consola desde el [log](./other/02.log).

`D:/unleashed-firmware/build/latest/.extapps/my_first_app.fap` will need to drag and drop to the qFlipper.

![my_first_app on FlipperZero device drag and drop to qFlipper on Windows](https://github.com/miguelgargallo/flipperzero/assets/5947268/5206495f-dafa-4268-9018-a97bb5f078b4)

Then we go to the FlipperZero device, Applications `Examples` folder and we will see the app.

es: Luego vamos al dispositivo FlipperZero, a la carpeta de `Ejemplos` de Aplicaciones y veremos la aplicación.

`? my_first_app`

We click on it and we will see the app running.

es: Hacemos clic en ella y veremos la aplicación en funcionamiento.

## Features
On  tap, any button it interacts, with this you can create a 🐉 dragon game or an app using this features ✨!

### 🔄 Go back button screen
![Go back button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/9ac0fff8-072e-4cb6-aa41-653739e16b57)
### ⏺️ Go center button screen
![Go center button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/dd6ac995-29ca-4596-a1ed-229048ab44b9)
### ⬇️ Go down button screen
![Go down button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/443f78ea-dd58-412d-8f02-f53f080b397e)
### ⬅️ Go left button screen
![Go left button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/ab6fc1b7-3701-4c01-ba3a-15251da73885)
### ⬆️ Go up button screen
![Go up button screen](https://github.com/miguelgargallo/flipperzero/assets/5947268/d49f97b5-09ed-4ae7-a9e1-58a9a8a8fb90)
➡️
## License

[PYLAR AI CREATIVE ML LICENSE](License.md)
[OFFICIAL REFERENCE](https://huggingface.co/spaces/superdatas/LICENSE)
