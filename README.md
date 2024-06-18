# Bluetooth Controlled Car with Arduino Uno and HC-05

This project demonstrates how to build a Bluetooth controlled car using Arduino Uno, HC-05 Bluetooth module, and 4 motors with 4 wheels.

## Table of Contents

- [Introduction](#introduction)
- [Components Needed](#components-needed)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In this project, we utilize an Arduino Uno microcontroller board along with an HC-05 Bluetooth module to control a car. The car is equipped with 4 motors, each driving a separate wheel, allowing for omnidirectional movement.

## Components Needed

- Arduino Uno board
- HC-05 Bluetooth module
- 4 x DC motors
- Motor driver module (e.g., L298N)
- Chassis with 4 wheels
- Battery pack or power supply
- Jumper wires
- Breadboard (optional, depending on your setup)

## Circuit Diagram

Include a circuit diagram here that shows how the components are connected. You can use tools like Fritzing, draw.io, or any other diagramming tool of your choice.

![OIP](https://github.com/Sujay-Patel-GitHub/Bluetooth-Control-Car/assets/173051781/8ee5e41b-911c-4cca-a640-0eb28904b219)

## Installation

1. **Set up the Arduino IDE:**
   - Download and install the Arduino IDE from [Arduino's official website](https://www.arduino.cc/en/software).
   - Open the Arduino IDE and install the necessary board and library for HC-05 module.

2. **Connect the components:**
   - Follow the circuit diagram to connect Arduino Uno, HC-05, motor driver, motors, and power supply.

3. **Upload the code:**
   - Upload the Arduino sketch provided (`car_control.ino`) to your Arduino board using the Arduino IDE.

## Usage

1. **Power on the car** after uploading the code and ensuring all connections are secure.
   
2. **Pair your Bluetooth device** (e.g., smartphone) with the HC-05 module.

3. **Open a Bluetooth terminal app** on your smartphone and connect to the HC-05 module.

4. **Control the car** using the commands specified in your Arduino sketch (`car_control.ino`). Common commands might include:
   - Forward
   - Backward
   - Left
   - Right
   - Stop

5. **Have fun experimenting** with different maneuvers and controls!

## Contributing

Contributions are welcome! For major changes, please open an issue first to discuss what you would like to change.

## License

This project is licensed under the [MIT License](LICENSE).
