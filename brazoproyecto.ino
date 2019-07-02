#include<Servo.h> 
#define motorBase 12 //Declaro el pin de la base
#define motorderecha 11
#define motorizquierda 10
#define motormano 9
Servo base;//Declaro el servomotor de la base
Servo derecha;
Servo izquierda;
Servo mano;

char letra;
int valordem,valordei,valorded,valordeb;
int angulo;
void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:
 base.attach(motorBase);//inicializamos el servo
 /*for(angulo=0;angulo<=180;angulo++)
 {base.write(angulo);
 delay(50);
 }
 for(angulo=180;angulo>=90;angulo--)
 {base.write(angulo);
 delay(50);
 }*/
 
 derecha.attach(motorderecha);
/* for(angulo=47;angulo<=116;angulo++)
 {derecha.write(angulo);
 delay(100);
 }
 for(angulo=116;angulo>=81;angulo--)//max116min47medio81
 {derecha.write(angulo);
 delay(100);//el motor el mimnimo de grados es 47
 }*/
 
 izquierda.attach(motorizquierda);//inicializamos el servo
/* for(angulo=85;angulo<=160;angulo++)
 {izquierda.write(angulo);
 delay(100);
 }
 for(angulo=160;angulo>=112;angulo--)//max160min85medio112
 {izquierda.write(angulo);
 delay(100);//el motor el mimnimo de grados es 47
 }*/

 
mano.attach(motormano);//inicializamos el servo
// for(angulo=100;angulo<=140;angulo++)
// {mano.write(angulo);
 //delay(100);
//}
// for(angulo=140;angulo>=120;angulo--)//max140min100medio120
 //{mano.write(angulo);
// delay(100);//el motor el mimnimo de grados es 47
 //}
//}
}
void loop() 
{
  switch(letra)
  {
    case 'b':
    valordeb=angulo;
    base.write(valordeb);
    break;
    case 'i':
    valordei=angulo;
    izquierda.write(valordei);
    break;
    case 'd':
    valorded=angulo;
    derecha.write(valorded);
    break;
    case 'm':
    valordem=angulo;
    mano.write(valordem);
    delay(500);
    break;
    
  }
  if(Serial.available() >= 1)
  {
    letra=Serial.read();
    angulo=Serial.parseInt();
   
    
    Serial.println(letra);
    Serial.println(angulo);
  }
}
 
  /*  if(letra == b || letra == B)
  {
  base.write(angulo);
}
else if(letra == d || letra == D)

{
  derecha.write(angulo);
}
if(letra == i || letra == I)

{
  izquierda.write(angulo);
}
else if(letra == g || letra == G)
  {
    mano.write(angulo);
  }
  }
}
  */
  
