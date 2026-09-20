# Voice-Controlled Wheelchair

Design and development of a low-cost Bluetooth-based voice-controlled wheelchair using Arduino Uno, HC-05 Bluetooth communication, L293D motor driver, and DC motors for hands-free mobility.

## Overview

The Voice-Controlled Wheelchair is an assistive mobility prototype designed to enable users to control wheelchair movement using simple voice commands. The system converts voice input from a smartphone into predefined control commands and transmits them wirelessly through an HC-05 Bluetooth module.

The wheelchair combines an Arduino-based control unit, Bluetooth communication module, motor driver, DC motors, and battery-powered drive system. The Arduino receives the transmitted commands and controls the motors to provide forward, backward, left, right, and stop movements.

The project focuses on developing a simple, affordable, and accessible embedded-system solution for hands-free mobility.

## Key Contributions

- Design and development of a Bluetooth-based voice-controlled wheelchair
- Integration of Arduino Uno, HC-05 Bluetooth module, L293D motor driver, and DC motors
- Implementation of wireless command-based motor control
- Development of a low-cost assistive mobility solution using readily available components

## Components Used

| Component | Quantity | Function |
|---|---|---|
| Arduino Uno | 1 | Main controller for processing Bluetooth commands |
| HC-05 Bluetooth Module | 1 | Wireless communication with the smartphone |
| L293D Motor Driver Shield | 1 | Controls the direction of the DC motors |
| DC Motors | 2 | Provide wheelchair movement |
| Battery | 1 | Supplies power to the Arduino and motor driver |
| Switch | 1 | Controls system power |

The Arduino Uno acts as the main controller, the HC-05 Bluetooth module receives wireless commands from the smartphone, and the L293D motor driver controls the two DC motors. The motors are powered using an external battery to provide sufficient current for movement.

## System Design

### Control System

The wheelchair operates by receiving predefined voice commands from a smartphone. The smartphone converts speech into characters and transmits them through Bluetooth to the HC-05 module.

The Arduino receives and processes these characters and sends the corresponding control signals to the motor driver.

### Circuit Connections

The HC-05 Bluetooth module is connected to Arduino pins 11 (RX) and 10 (TX). The L293D motor driver is mounted on the Arduino and controls Motor 1 (M1) and Motor 2 (M2).

The motors are powered using an external battery, while a switch is used to control the overall power supply.

## Command Control

| Command | Character | Function |
|---|---|---|
| Forward | `F` | Both motors move forward |
| Backward | `B` | Both motors move backward |
| Left | `L` | Wheelchair turns left |
| Right | `R` | Wheelchair turns right |
| Stop | `S` | Both motors stop |

For forward movement, both motors rotate in the forward direction. For backward movement, both motors rotate in the reverse direction. Left and right turns are achieved by operating the two motors in opposite directions for a predefined turning duration.

## Flow of Operation

1. Voice command is given through a smartphone.
2. The smartphone converts the speech into a predefined control character.
3. The command is transmitted through Bluetooth.
4. The HC-05 module receives the command.
5. Arduino processes the received character.
6. The motor driver activates the corresponding motor operation.
7. The wheelchair moves in the requested direction.

## Software Implementation

The Arduino control program is developed using **Arduino C/C++** and uses the following libraries:

- `AFMotor`
- `SoftwareSerial`

The program establishes Bluetooth communication, initializes the two DC motors, sets their speed, and continuously checks for incoming commands.

The received characters are mapped to corresponding motor operations:

- `F` — Forward
- `B` — Backward
- `L` — Left
- `R` — Right
- `S` — Stop

The turning functions operate the two motors in opposite directions for a predefined duration before releasing the motors.

## Features

- Hands-free wheelchair operation
- Bluetooth-based wireless communication
- Voice-command-based directional control
- Forward, backward, left, right, and stop operations
- Arduino-based embedded control
- Low-cost hardware implementation
- Two-motor drive system
- Simple and customizable control architecture

## Advantages

- **Hands-free operation** — Enables users to control wheelchair movement using simple voice commands
- **Low cost** — Uses readily available and affordable electronic components
- **Customizable** — Arduino allows additional sensors and modules to be integrated
- **Simple control system** — Uses a straightforward Bluetooth and two-motor control architecture

## Limitations

- Voice recognition performance may decrease in noisy environments
- Requires periodic battery recharging
- Current implementation relies on predefined voice commands
- Obstacle detection and automatic collision avoidance are not implemented

## Future Scope

- Integration of ultrasonic sensors for obstacle detection and avoidance
- Implementation of AI-based voice recognition to support multiple accents
- Addition of GPS and IoT connectivity for remote monitoring
- Introduction of automatic braking and emergency-stop functionality
- Improvement of system reliability and safety for real-world operation

## Applications

- Assistive mobility systems
- Low-cost wheelchair automation
- Embedded systems and robotics
- Human-machine interaction
- Educational and academic robotics projects

## Team

**Department of Mechanical Engineering, IIT Indore**

| S.No | Name | Roll Number |
|---|---|---|
| 1 | Jaajimoggala Ramaraju | 230003028 |
| 2 | Sanganaboina Manjunatha | 230003067 |
| 3 | Banoth Santhosh | 230003014 |
| 4 | Mannem Hari Shankar Goud | 220003051 |
| 5 | Chintala Prajay Verma | 230003018 |

## Project Report

The complete project report is available in the `docs` directory.

## Repository Structure

Voice-Controlled-Wheelchair/
  
├── README.md  
├── src/  
│   └── wheelchair_control.ino  
├── circuit/  
│   └── circuit_diagram.png  
└── docs/  
    └── Voice_Controlled_Wheelchair_Project_Report.pdf

## License

None.
