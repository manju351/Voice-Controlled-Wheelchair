#include <AFMotor.h>
#include <SoftwareSerial.h>

// ==================== Bluetooth Configuration ====================

#define BT_RX 10
#define BT_TX 11
#define BT_BAUD_RATE 9600

SoftwareSerial bluetooth(BT_RX, BT_TX);

// ==================== Motor Configuration ====================

#define MOTOR_SPEED 100
#define TURN_TIME 400  // milliseconds

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

// ==================== Motor Control Functions ====================

void stopMotors() {
    motor1.run(RELEASE);
    motor2.run(RELEASE);
}

void moveForward() {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
}

void moveBackward() {
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
}

void turnLeft() {
    motor1.run(FORWARD);
    motor2.run(BACKWARD);

    delay(TURN_TIME);

    stopMotors();
}

void turnRight() {
    motor1.run(BACKWARD);
    motor2.run(FORWARD);

    delay(TURN_TIME);

    stopMotors();
}

// ==================== Command Processing ====================

void processCommand(char command) {

    switch (command) {

        case 'F':
            moveForward();
            break;

        case 'B':
            moveBackward();
            break;

        case 'L':
            turnLeft();
            break;

        case 'R':
            turnRight();
            break;

        case 'S':
            stopMotors();
            break;

        default:
            // Ignore unrecognized commands
            break;
    }
}

// ==================== Setup ====================

void setup() {

    Serial.begin(9600);
    bluetooth.begin(BT_BAUD_RATE);

    motor1.setSpeed(MOTOR_SPEED);
    motor2.setSpeed(MOTOR_SPEED);

    // Keep motors stopped during startup
    stopMotors();
}

// ==================== Main Loop ====================

void loop() {

    if (bluetooth.available()) {

        char command = bluetooth.read();

        // Display received command in Serial Monitor
        Serial.println(command);

        processCommand(command);
    }
}
