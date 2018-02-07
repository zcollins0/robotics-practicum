// [ **** Partner 1, Partner 2 ****** ]
// [ **** Date **** ]
// *** Robotics Lab 1 Skeleton Code
// Part 1: Simple Movement

// *** Include Servo Library
#include <Servo.h>

// *** Set Custom Names for each pin
#define RIGHT_SERVO_PIN 12
#define LEFT_SERVO_PIN 13

// *** Configure Variables
Servo rightServo;
Servo leftServo;

const int SERVO_ZERO = 1500;   //writing this to the servos will stop the movement

void setup() {
  // ***put your setup code here, to run once:

  // Open the Serial Port:
  Serial.begin(9600); //This allows us to write to the serial console
  
  attachServos();  
}

void loop() {
  // *** put your main code here, to run repeatedly:
  turn90(1);  // if you upload this as is, your bot should just spin in circles.

}

// **** USER WRITTEN FUNCTIONS ****
void attachServos(){
  // Do not Edit. Allows the Arduino to recognize the servos
  rightServo.attach(RIGHT_SERVO_PIN);
  leftServo.attach(LEFT_SERVO_PIN);
  }


void stopMovement(int stopTime){
  //*** stops the movement of the servos specified by argument stopTime (ms)
  // Note: If your servos are not correctly calibrated to this zero position, they may still move slowly.
  rightServo.writeMicroseconds(1500);
  leftServo.writeMicroseconds(1500); 
  delay(stopTime);
  }

