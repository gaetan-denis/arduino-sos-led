# SOS Morse Code LED - Arduino
![Language](https://img.shields.io/badge/language-C++-blue)
![Status](https://img.shields.io/badge/status-learning-orange)
![License](https://img.shields.io/badge/license-MIT-green)
## Description

This minimal Arduino project blinks an LED to send SOS in Morse code.
It’s designed for beginners to learn Arduino programming, LED control, and Morse timing.

## Morse Code Rules

* · (dot) = 1 unit

* – (dash) = 3 units

* Pause between symbols of the same letter = 1 unit

* Pause between letters = 3 units

* Pause between words = 7 units

* In this project, UNIT = 100 ms (modifiable to speed up or slow down the SOS).

## Components Needed

* 1 LED (any color)

* 1 resistor (220Ω – 1kΩ)

* Arduino board (Uno, Nano, etc.)

* Breadboard and jumper wires

## Wiring / Diagram

**ASCII Diagram**
```text
   LED Anode (+) --------- Pin 2 (Arduino OUTPUT)
   LED Cathode (-) ---/\/\/\--- GND
```
## Tinkercad / Fritzing Diagram

If using Tinkercad, you can replicate the wiring:

1. LED anode (+) → Arduino Pin 2
2. LED cathode (-) → resistor → Arduino GND

![Tinkercad Circuit](images/circuit.png)

## Usage

1. Upload the code to your Arduino.

2. The LED will blink SOS continuously.

3. Adjust UNIT in the code to change the speed.

## Code Highlights

* dot() and dash() functions abstract Morse symbols.

* Timing respects Morse code standard.

* Easy to extend for other letters or messages.

## License

This project is released under the MIT License, feel free to use and modify it.
