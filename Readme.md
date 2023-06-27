# My Flipper Apps

- [My Flipper Apps](#my-flipper-apps)
  - [How to successfully deploy your new FlipperZero app, on my new repo of miguelgargallo/flipperzero guide.](#how-to-successfully-deploy-your-new-flipperzero-app-on-my-new-repo-of-miguelgargalloflipperzero-guide)
  - [my\_first\_app](#my_first_app)
    - [Installation](#installation)
  - [License](#license)

## How to successfully deploy your new FlipperZero app, on my new repo of miguelgargallo/flipperzero guide.

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

![screenshotflipperzeroappmiguelgargallocenter](https://github.com/miguelgargallo/flipperzero/assets/5947268/627f0d7b-71a8-4995-8221-7a261c1d6d4e)
![screenshotflipperzeroappmiguelgargallodown](https://github.com/miguelgargallo/flipperzero/assets/5947268/cd94f2c0-aa8b-4c83-ba4c-69a29132654d)
![screenshotflipperzeroappmiguelgargalloleft](https://github.com/miguelgargallo/flipperzero/assets/5947268/b1c7fdbc-03cb-48b4-bef7-9ee788b6843f)
![screenshotflipperzeroappmiguelgargalloright](https://github.com/miguelgargallo/flipperzero/assets/5947268/91b1f4dc-f718-4483-9ee7-8104a7ae74da)
![screenshotflipperzeroappmiguelgargalloup](https://github.com/miguelgargallo/flipperzero/assets/5947268/30c5cec4-e6c3-45ab-8051-2299a4b02d0c)

## License

[PYLAR AI CREATIVE ML LICENSE](License.md)
[OFFICIAL REFERENCE](https://huggingface.co/spaces/superdatas/LICENSE)
