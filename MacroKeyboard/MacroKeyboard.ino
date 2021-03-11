//set button pins
const int button1 = 8;
const int button2 = 9;
const int button3 = 10;
const int button4 = 11;
const int button5 = 12;
//initialize all button states to 0
int buttonState1 = 0, buttonState2 = 0, buttonState3 = 0, buttonState4 = 0, buttonState5 = 0;
int currentlyPressed = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Starting Keyboard");

//Set the button pins to be inputs
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);
  buttonState4 = digitalRead(button4);
  buttonState5 = digitalRead(button5);

  if(buttonState1 == 1){
    if(currentlyPressed == 0){
      Serial.println("Button1 pressed");
      currentlyPressed = 1;
    }
  }else if(buttonState2 == 1){
    if(currentlyPressed == 0){
      Serial.println("Button2 pressed");
      currentlyPressed = 1;
    }
  }else if(buttonState3 == 1){
    if(currentlyPressed == 0){
      Serial.println("Button3 pressed");
      currentlyPressed = 1;
    }
  }else if(buttonState4 == 1){
    if(currentlyPressed == 0){
      Serial.println("Button4 pressed");
      currentlyPressed = 1;
    }
  }else if(buttonState5 == 1){
    if(currentlyPressed == 0){
      Serial.println("Button5 pressed");
      currentlyPressed = 1;
    }
  }else{
    currentlyPressed = 0;
  }
  delay(20);
}

void button1Macro(){
  
}
void button2Macro(){
  
}
void button3Macro(){
  
}
void button4Macro(){
  
}
void button5Macro(){
  
}
