# My Flipper Apps

es: Mis Apps de Flipper.

![Miguel Gargallo How to deploy Flipper Zero Apps](https://github.com/miguelgargallo/myFlipper/assets/5947268/4849233c-6981-48c6-9cc2-9cd8a9f25e0b)

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

![my_first_app on FlipperZero device drag and drop to qFlipper on Windows](https://github.com/miguelgargallo/myFlipper/assets/5947268/b0e18d2d-6322-40b3-8f91-8d4080f85988)

Then we go to the FlipperZero device, Applications `Examples` folder and we will see the app.

es: Luego vamos al dispositivo FlipperZero, a la carpeta de `Ejemplos` de Aplicaciones y veremos la aplicación.

`? my_first_app`

We click on it and we will see the app running.

es: Hacemos clic en ella y veremos la aplicación en funcionamiento.

![my_first_app on FlipperZero device](https://github.com/miguelgargallo/myFlipper/assets/5947268/4fcead46-d2cf-480c-8dc1-aa2cf6261f33)

