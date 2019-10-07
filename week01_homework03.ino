//可以玩的
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
