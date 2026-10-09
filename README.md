# ESP32 Button-Controlled LED

My first ESP32 embedded systems project using C++ and the Arduino framework.

## What It Does

- Reads a push button using GPIO 18
- Controls an LED using GPIO 23
- LED turns on while the button is pressed
- Uses the ESP32 internal pull-up resistor

## Hardware

- ESP32 Development Board
- Breadboard
- LED
- Push button
- Resistor
- Jumper wires

## Wiring

- GPIO 23 -> LED positive leg
- LED negative leg -> resistor -> GND
- GPIO 18 -> push button
- Push button -> GND

## What I Learned

- GPIO inputs and outputs
- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `INPUT_PULLUP`
- Breadboard wiring
- Uploading C++ code to an ESP32