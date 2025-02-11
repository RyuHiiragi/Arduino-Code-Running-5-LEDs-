# Running LEDs with Arduino UNO

## Description

This is a simple Arduino project where 5 LEDs are connected to an Arduino UNO and lit up sequentially to create a "running" effect. Each LED turns on for 500ms, then turns off before the next LED lights up. This project demonstrates the use of basic digital output control on the Arduino.

## Hardware Required

- 1 x Arduino UNO
- 5 x LEDs
- 5 x 220Ω resistors
- Breadboard
- Jumper wires

## Wiring Diagram

- LEDs are connected to pins 2, 3, 4, 5, and 6 on the Arduino.  
- The other side of the LEDs is connected to GND through 220Ω resistors.

## Code

You can find the Arduino code in the `running_leds.ino` file. This code controls the LEDs by turning them on and off one by one.

## Installation Instructions

1. Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
2. Connect your Arduino UNO to your computer via USB.
3. Open the Arduino IDE, and paste the code from `running_leds.ino`.
4. Select the correct board and port in the Arduino IDE.
5. Upload the code to your Arduino board.
6. Watch the LEDs run in sequence!

## License

This project is licensed under the MIT License - see the LICENSE file for details.
