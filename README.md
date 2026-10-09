# ESP32 Pedestrian Traffic Light

A simple embedded systems project using an ESP32, three LEDs, and a push button to simulate a pedestrian traffic light.

## What It Does

- Green light stays on during normal operation
- Pressing the pedestrian button starts the crossing sequence
- Waits 3 seconds after the button is pressed
- Green turns off
- Yellow turns on for 1 second
- Red turns on for 3 seconds
- Returns back to green
- Uses `millis()` instead of long blocking delays

## Hardware

- ESP32 Development Board
- Breadboard
- Red LED
- Yellow LED
- Green LED
- Push button
- 3 resistors
- Jumper wires

## GPIO Pins

- Red LED: GPIO 23
- Yellow LED: GPIO 22
- Green LED: GPIO 21
- Pedestrian Button: GPIO 18
- Ground: GND

## Concepts Used

- GPIO inputs and outputs
- `pinMode()`
- `digitalRead()`
- `digitalWrite()`
- `INPUT_PULLUP`
- `if` and `else if`
- State tracking
- `millis()`
- Non-blocking timing
- Breadboard wiring

## Traffic Light States

- State 0: Green
- State 1: Waiting after button press
- State 2: Yellow
- State 3: Red

## What I Learned

This project helped me understand how an ESP32 can read physical input from a button and control multiple outputs.

I also learned the difference between `delay()` and `millis()` and how state variables can be used to control a sequence without stopping the entire program.