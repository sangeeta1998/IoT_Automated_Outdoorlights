#include <SoftwareSerial.h>
SoftwareSerial ArduinoUno(3,2);
int ldr=A0;
int current=A1;
int ir1=A2;
int ir2=A3;
int ir3=A4;
int led1=9;
int led2=6;
int led3=7;
void setup() {
  pinMode(ldr,INPUT);
  pinMode(current,INPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
  ArduinoUno.begin(4800);
  

}

void loop() {
  int intensity=analogRead(ldr);
  
  

  if(intensity<100)
  {
   // ArduinoUno.print(0);
    //  ArduinoUno.println("\n");
    int post1=analogRead(ir1);

    int post2=analogRead(ir2);

    int post3=analogRead(ir3);
    
    if(post1>70)
    {
      digitalWrite(led1,HIGH);
      int cval=analogRead(current);
      Serial.println(cval);
     if(cval>=52){
      ArduinoUno.print(1);
      ArduinoUno.println("\n");
      Serial.println("led1 on");
    }
    else
    {
      ArduinoUno.print(0);
      ArduinoUno.println("\n");
      Serial.println("led1 off");
    }
    }
    
    else{
      digitalWrite(led1,LOW);
    }
    
    if(post2>150){
    digitalWrite(led2,HIGH);
    ArduinoUno.print(2);
      ArduinoUno.println("\n");
      Serial.println("led2");
  }

  else{
     digitalWrite(led2,LOW);
  }
  
  if(post3>100){
    ArduinoUno.print(3);
      ArduinoUno.println("\n");
    digitalWrite(led3,HIGH);
    Serial.println("led3");
  }
  else{
    digitalWrite(led3,LOW);
  }

  }
  else
  {
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
    Serial.println("Connection closed");
  }
  delay(30);
  // put your main code here, to run repeatedly:

}
