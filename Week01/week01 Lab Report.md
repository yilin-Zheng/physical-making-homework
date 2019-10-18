## Week 01 Lab Report

#### First time coder.

### Homework 01 - Test

Same circuit as project book.


int switchState=0;

void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
switchState=digitalRead(2);

 if(switchState==LOW){
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
}
 else{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
 delay(250);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 delay(250);
 }
}


###### VedioLink 
https://www.youtube.com/watch?v=jNgGUzitOLs


### Homework 02 - Improvement

Self-learning process.

int switchState1=0;
int switchState2=0;

void setup() {
pinMode(6,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,INPUT);
pinMode(8,INPUT);

}

void loop() {
switchState2=digitalRead(2);
switchState1=digitalRead(8);

if(switchState1==LOW)

switch (switchState2){
 case LOW:  {
  digitalWrite(4,HIGH); 
digitalWrite(5,LOW);
digitalWrite(6,LOW);
delay(500);
digitalWrite(4,LOW); 
digitalWrite(5,HIGH);
delay(500);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(500);
break;
}

 case HIGH:{
  digitalWrite(4,LOW);
delay(250);
digitalWrite(4,HIGH);
delay(50);
break;
 }
} 

 
else if (switchState1==HIGH){
  
switch (switchState2){
 case LOW:  {
  digitalWrite(4,LOW);
delay(500);
digitalWrite(4,HIGH);
delay(500);
digitalWrite(5,LOW);
delay(500);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(6,LOW);
delay(500);
digitalWrite(6,HIGH);
delay(500);
break;
}

 
case HIGH : {
 digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
delay(200);

digitalWrite(4,LOW);
delay(50);
digitalWrite(5,LOW); 
delay(25);
digitalWrite(6,LOW);
delay(15);
break;
}

return 0;
}

 }
 
}

###### VedioLink 
https://www.youtube.com/watch?v=Y7KDHggAGRM

### Homework 03 - Game

The game principle is that when LEDs are on, press the coresponding button until blue light flash to move on to the next loop. The loop continues to run until the player fails to press the button and then game is over.

Pre-start mode, yelow instruction light flashes slowly;
Press start button,  both game LEDs flashes twice;
Game starts;
Both LEDs are set to flash randomly to make game more playful;
Blue instruction light flashed for every suceeded loop;
If failed, yellow instruction light flashes quickly for three times and the programme goes back to pre-start mode.


int lightMode10=1;
int lightMode11=1;
int lightBLU=8;
int lightYEL=9;
int gamestart=0;

void setup(){
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop(){
  if (gamestart==0){
  digitalWrite(lightYEL,HIGH);
  delay(500);
  digitalWrite(lightYEL,LOW);
  delay(1000);
  }
  if (digitalRead(3)==HIGH){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(1000);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(250);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(1000);
    gamestart=1;
  }
  if (gamestart==1){
    //game starts
    lightMode10=rand()%2;
    lightMode11=rand()%2;
    
      digitalWrite(10,lightMode10);
      digitalWrite(11,lightMode11);
      delay(500);
      
    if((digitalRead(4) != lightMode10) || (digitalRead(5) != lightMode11)){
      digitalWrite(lightYEL,HIGH);
      delay(125);
      digitalWrite(lightYEL,LOW);
      delay(125);
      digitalWrite(lightYEL,HIGH);
      delay(125);
      digitalWrite(lightYEL,LOW);
      delay(125);
      digitalWrite(lightYEL,HIGH);
      delay(125);
      digitalWrite(lightYEL,LOW);
      delay(125);
      gamestart=0;
      }
      digitalWrite(lightBLU,HIGH);
      delay(500);
      digitalWrite(lightBLU,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      delay(500); 
    }
}



###### VedioLink 
https://www.youtube.com/watch?v=cVFAY7nHZUY