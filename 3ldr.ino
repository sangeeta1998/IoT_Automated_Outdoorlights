#include <SoftwareSerial.h>
SoftwareSerial ArduinoUno(3,2);

void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  ArduinoUno.begin(4800);
  // put your setup code here, to run once:

}

void loop() {
  int l1=analogRead(A4);
  
  
/*  Serial.print("ldr1=");
  Serial.print(l1);
  Serial.println();
  Serial.print("ldr2=");
  Serial.print(l2);
  Serial.println();
  Serial.print("ldr3=");
  Serial.print(l3);
  Serial.println();*/
  if(l1<100)
  {
    int l2=analogRead(A2);
    if(l2>160)
    {
      digitalWrite(7,HIGH);
      int l3=analogRead(A0);
      if(l3>100){
      ArduinoUno.print(0);
      ArduinoUno.println("\n");
      Serial.println("on");
    }
    else
    {
      ArduinoUno.print(1);
      ArduinoUno.println("\n");
      Serial.println("off");
    }
    }
    digitalWrite(7,LOW);
  }
  else
  {
    digitalWrite(7,LOW);
    Serial.println("Connection closed");
  }
  delay(1000);
  // put your main code here, to run repeatedly:

}
