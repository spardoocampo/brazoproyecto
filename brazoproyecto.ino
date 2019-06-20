#include<Servo.h> 
#define motorBase 12 //Declaro el pin de la base
#define motorderecha 11
#define motorizquierda 10
#define motormano 9
Servo base;//Declaro el servomotor de la base
Servo derecha;
Servo izquierda;
Servo mano;
int angulo = 0;

void setup() {
  // put your setup code here, to run once:
 base.attach(motorBase);//inicializamos el servo
 for(angulo=0;angulo<=180;angulo++)
 {base.write(angulo);
 delay(50);
 }
 for(angulo=180;angulo>=90;angulo--)
 {base.write(angulo);
 delay(50);
 }
 
 derecha.attach(motorderecha);
 for(angulo=47;angulo<=116;angulo++)
 {derecha.write(angulo);
 delay(100);
 }
 for(angulo=116;angulo>=81;angulo--)//max116min47medio81
 {derecha.write(angulo);
 delay(100);//el motor el mimnimo de grados es 47
 }
 
 izquierda.attach(motorizquierda);//inicializamos el servo
 for(angulo=85;angulo<=160;angulo++)
 {izquierda.write(angulo);
 delay(100);
 }
 for(angulo=160;angulo>=112;angulo--)//max160min85medio112
 {izquierda.write(angulo);
 delay(100);//el motor el mimnimo de grados es 47
 }

 
mano.attach(motormano);//inicializamos el servo
 for(angulo=100;angulo<=140;angulo++)
 {mano.write(angulo);
 delay(100);
 }
 for(angulo=140;angulo>=120;angulo--)//max140min100medio120
 {mano.write(angulo);
 delay(100);//el motor el mimnimo de grados es 47
 }

}
void loop() {
  // put your main code here, to run repeatedly:

}
