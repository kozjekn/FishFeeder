#include <Stepper.h>
 
// Number of steps per internal motor revolution 
const float STEPS_PER_REV = 32; 
//  Amount of Gear Reduction
const float GEAR_RED = 64;
// Number of steps per geared output rotation
const float STEPS_PER_OUT_REV = STEPS_PER_REV * GEAR_RED;

// Connected to ULN2003 Motor Driver In1, In2, In3, In4 
const int stepper_In1 = 13;
const int stepper_In2 = 14;
const int stepper_In3 = 12;
const int stepper_In4 = 27;
//Button for manual control pin
const int buttonPin = 15;

//Movemnt variables
const int stepsPerChamber = 343; //Steps required to change chamber
const int targetMoveSeconds = 86400; //Seconds between each automatic chamber change 

//Init aux variables
// Pins entered in sequence 1-3-2-4 for proper step sequencing
Stepper steppermotor(STEPS_PER_REV,stepper_In1, stepper_In2, stepper_In3, stepper_In4);
double secondsElapsed = 0;
int buttonState = 0;   

void setup()
{
  pinMode(buttonPin, INPUT);
  
}
 
void loop()
{
  //Handle button being pressed
  buttonState = digitalRead(buttonPin);
 if (buttonState == LOW) { 
      steppermotor.setSpeed(500);
      steppermotor.step(15);
      secondsElapsed = 0;
    }
  else if(targetMoveSeconds <= secondsElapsed){
      steppermotor.setSpeed(500);
      steppermotor.step(stepsPerChamber);
      secondsElapsed = 0;
    }
  else{
    delay(200);
    secondsElapsed += 0.2;
    }
 
}
