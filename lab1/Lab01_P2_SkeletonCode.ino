// [ **** Partner 1, Partner 2 ****** ]
// [ **** Date **** ]
// *** Robotics Lab 1 Skeleton Code
// Lab 01 Part 2: Sensor Acquisition

// *** Include Servo Library
#include <Servo.h>

// *** Set Custom Names for each pin
#define RIGHT_SERVO_PIN 12
#define LEFT_SERVO_PIN 13
int IR_OUT_PIN = 9;
int IR_IN_PIN = 8;

// *** Configure Variables
Servo rightServo;
Servo leftServo;
int IR_in;
const int FREQ = 38500; //frequency the ir sensor works at
const int SERVO_ZERO = 1500;

void setup() {
  // put your setup code here, to run once:
  
  // YOU Set the appropriate pin Modes. Uncomment and configure!
  // pinMode(_,_);  // Configure the IR led as an output
  // pinMode(_,_);  // Configure the IR sensor pin as an input (the signal pin from the powerpoint)

  // Open up the serial port
  Serial.begin(9600);

  //attach servos
  attachServos();
}

void loop() {
  // put your main code here, to run repeatedly:
  // First, check for any object in the current path
  // If any objects are in the path, stop or turn or do something! Don't hit anything.
  
}

void attachServos(){
  rightServo.attach(RIGHT_SERVO_PIN);
  leftServo.attach(LEFT_SERVO_PIN);
  }

int irDetect(){
  // *** Checks for an object registering on the IR Receiver
  // returns 0 if an object is detected, 1 otherwise.
  tone(IR_OUT_PIN, FREQ, 8);
  delay(1);
  int ir = digitalRead(IR_IN_PIN);
  delay(1);
  return ir;
  }

