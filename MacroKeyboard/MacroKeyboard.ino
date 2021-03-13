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
char ctrl = 128;
void setup() {


  //Set the button pins to be inputs
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);

  Keyboard.begin();
  delay(200);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);

  if (buttonState1 == 1) {
    if (currentlyPressed == 0) {
      button1Macro();
      currentlyPressed = 1;
    }
  } else if (buttonState2 == 1) {
    if (currentlyPressed == 0) {
      button2Macro();
      currentlyPressed = 1;
    }
  } else if (buttonState3 == 1) {
    if (currentlyPressed == 0) {
      button3Macro();
      currentlyPressed = 1;
    }
  } else if (buttonState4 == 1) {
    if (currentlyPressed == 0) {
      button4Macro();
      currentlyPressed = 1;
    }
  } else if (buttonState5 == 1) {
    if (currentlyPressed == 0) {
      button5Macro();
      currentlyPressed = 1;
    }
  } else {
    currentlyPressed = 0;
  }
  delay(20);
}

void button1Macro() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RIGHT_CTRL);
  Keyboard.print("m");
  delay(50);
  Keyboard.releaseAll();
}
void button2Macro() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_ESC);
  delay(50);
  Keyboard.releaseAll();
}
void button3Macro() {
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
void button4Macro() {
  //Macro code here
}
void button5Macro() {
  //Macro code here
}
