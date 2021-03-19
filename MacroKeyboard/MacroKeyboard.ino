#include <Keyboard.h>
//set button pins
const int button1 = 2;
const int button2 = 4;
const int button3 = 6;
const int button4 = 10;
const int button5 = 14;
//initialize all button states to 0
int buttonState1 = 0, buttonState2 = 0, buttonState3 = 0, buttonState4 = 0, buttonState5 = 0;
int currentlyPressed = 0;
void setup() {


  //Set the button pins to be inputs
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);

  //Start the keyboard
  Keyboard.begin();
  delay(200);
}


void loop() {
  //Get the state of every button
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);

  //check which button, if any, is currently pressed
  if (buttonState1 == 1) {
     button1Macro();
  } else if (buttonState2 == 1) {
      button2Macro();
  } else if (buttonState3 == 1) {
      button3Macro();
  } else if (buttonState4 == 1) {
      button4Macro();
  } else if (buttonState5 == 1) {
      button5Macro();
  } else {
    //let system know that all buttons have been released
    currentlyPressed = 0;
  }
  //wait before looping again
  delay(20);
}

void button1Macro() {
  //Presses Left CTRL, Right CTRL, and "m", then releases
  if (currentlyPressed == 0) {
    currentlyPressed = 1;
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.print("m");
    delay(50);
    Keyboard.releaseAll();
  }
}

void button2Macro() {
  //Presses Left CRTL, Left Shift, and Escape
  if (currentlyPressed == 0) {
    currentlyPressed = 1;
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(50);
    Keyboard.releaseAll();
  }
}
  
void button3Macro() {
  //Searches google for selected text in google chrome
  if (currentlyPressed == 0) {
    currentlyPressed = 1;
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_F10);
    delay(50);
    Keyboard.releaseAll();
    Keyboard.press(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.releaseAll();
    Keyboard.press(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.releaseAll();
    Keyboard.press(KEY_RETURN);
    delay(50);
    Keyboard.releaseAll();
  }
}


void button4Macro() {
  //Presses Windows Key, Left Shift, and Right (switches monitor selected window is on)
  if (currentlyPressed == 0) {
    currentlyPressed = 1;
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(10);
    Keyboard.releaseAll();
  }
}
void button5Macro() {
  //Add template here
}

/* These are some templates for different kinds of macros

/// Runs macro once when button first pressed
  
  if(currentlyPressed == 0) {
    currentlyPressed = 1;
    //Macro goes here
  }


/// Runs repeatedly until button is released again
  
  currentlyPressed = 1;
  //Macro goes here




 */
