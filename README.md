# FishFeeder

 Project for automaitcly feeding fish every day, complete with 3D printable models and Arduino code. Uses stepper motor with ULN2003 driver board.

### Usage

When button is pressed motor will spin to allow user callibration of the chamber aligment. After button is relesed timer is reset and system will swich chamber after `targetMoveSeconds` seconds elapse.

### Images

TODO

### ESP32

Mocrocontroller used for this project was ESP32.  Bellow is schematic of ESP32 GPIO pinout for refernce to help migrating to another microcontroller.

![ESP32-DEV-KIT-DevKitC-v4-pinout-mischianti.jpg](.\879ab1db12d31e3a6cbf6293cee2b15b620d610b.jpg)

### Stepper motor

Specification sheet of  used stepper motor (used driver board: `ULN2003`).

![1643574096258.jpg](.\assets\d1d86311cd487f3f1eec8121ff93bd3710fb8a00.jpg)

### Circut schematic

![Blank diagram.png](.\assets\4307f492a36da37c1e5134392b7bb6d90c18548f.png)
