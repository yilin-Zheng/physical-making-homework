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
