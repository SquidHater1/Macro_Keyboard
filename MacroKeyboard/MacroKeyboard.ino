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
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);

  Keyboard.begin();
  delay(200);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);

  if(buttonState1 == 1){
    if(currentlyPressed == 0){
      button1Macro();
      currentlyPressed = 1;
    }
  }else if(buttonState2 == 1){
    if(currentlyPressed == 0){
      currentlyPressed = 1;
    }
  }else if(buttonState3 == 1){
    if(currentlyPressed == 0){
      currentlyPressed = 1;
    }
  }else if(buttonState4 == 1){
    if(currentlyPressed == 0){
      currentlyPressed = 1;
    }
  }else if(buttonState5 == 1){
    if(currentlyPressed == 0){
      currentlyPressed = 1;
    }
  }else{
    currentlyPressed = 0;
  }
  delay(20);
}

void button1Macro(){
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.print("m");
  delay(10);
  Keyboard.releaseAll();
}
void button2Macro(){
  
}
void button3Macro(){
  
}
void button4Macro(){
  
}
void button5Macro(){
  
}
