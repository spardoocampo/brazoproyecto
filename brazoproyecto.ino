#include<Servo.h> 

#define motorBase 12 //Declaro el pin de la base

#define motorderecha 11

#define motorizquierda 10

#define motormano 9

Servo Base;//Declaro el servomotor de la base


void setup() {
  // put your setup code here, to run once:
 Base.attach(motorBase);//inicializamos el servo
 Base.write(90);
 delay(2000);
 Base.write(0);
 delay(2000);
 Base.write(180);
 delay(2000);
 Base.write(90);
 delay(2000);
 
 Base.attach(motorderecha);//el motor el mimnimo de grados es 47
 Base.write(47);
 delay(2000);
 Base.write(90);
 delay(2000);
 Base.write(116);//max116
 delay(2000);
 Base.write(90);
 delay(2000);
 
 Base.attach(motorizquierda);//inicializamos el servo
 Base.write(90);//min85
 delay(2000);
 Base.write(120);
 delay(2000);
 Base.write(160);
 delay(2000);
 Base.write(85);
 delay(2000);
 
Base.attach(motormano);//inicializamos el servo
 Base.write(100);//min100
 delay(2000);
 Base.write(135);
 delay(2000);
 Base.write(140);//max140
 delay(2000);
 Base.write(135);
 delay(2000);

}
void loop() {
  // put your main code here, to run repeatedly:

}
