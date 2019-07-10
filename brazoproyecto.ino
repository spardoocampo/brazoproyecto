#include<Servo.h> 
#include<SoftwareSerial.h>
#define motorBase 12 //Declaro el pin de la base
#define motorderecha 11
#define motorizquierda 10
#define motormano 9
Servo base;//Declaro el servomotor de la base
Servo derecha;
Servo izquierda;
Servo mano;
SoftwareSerial BT(2,3);
char letra;
int valordem,valordei,valorded,valordeb;
int angulo;
void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  
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
 for(angulo=116;angulo>=81;angulo--)//max150min47medio81
 max
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
derecha.write(120);
base.write(77);
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
    break;
    case '1':
     mano.write(120);
    delay(1000);
    base.write(77);
    delay(1000);
    
    for(angulo=100;angulo<=135;angulo++)
 {derecha.write(angulo);
 delay(50);
 }
 for(angulo=100;angulo<=125;angulo++)
 {izquierda.write(angulo);
 delay(50);
 }

 for(angulo=77;angulo>=90;angulo--)
 {base.write(angulo);
 delay(50);
 }
   
    
  /*  derecha.write(135);
    delay(1000);*/
    /*izquierda.write(125);
    delay(1000);*/
    mano.write(142);
    delay(1000);

    for(angulo=100;angulo<=145;angulo++)
 {izquierda.write(angulo);
 delay(50);
 }
 for(angulo=135;angulo>=110;angulo--)
 {derecha.write(angulo);
 delay(50);
 }
 for(angulo=145;angulo>=100;angulo--)
 {izquierda.write(angulo);
 delay(50);
 }
 for(angulo=77;angulo<=180;angulo++)
 {base.write(angulo);
 delay(50);
 }
/*    izquierda.write(145);
    delay(1000);*/
   /* derecha.write(110);
    delay(1000);*/
    /*izquierda.write(100);
    delay(1000);*/
/*    base.write(180);
    delay(1000);*/
    mano.write(100);
    delay(1000);    
    break;
    case ('2'):
    mano.write(120);
    delay(1000);
    
    izquierda.write(153);
    delay(1000);
    
    base.write(117);
    delay(1000);
    derecha.write(155);
    delay(1000);
    
    mano.write(142);
    delay(1000);
    izquierda.write(148);
    delay(1000);
    derecha.write(112);
    delay(1000);
    izquierda.write(100);
    delay(1000);
    base.write(180);
    delay(1000);
    mano.write(100);
    delay(1000);    
    break;
    case ('3'):
    mano.write(120);
    delay(1000);
    
    izquierda.write(150);
    delay(1000);
    
    base.write(30);
    delay(1000);
    derecha.write(155);
    delay(1000);
    
    mano.write(142);
    delay(1000);
    izquierda.write(145);
    delay(1000);
    derecha.write(110);
    delay(1000);
    izquierda.write(100);
    delay(1000);
    base.write(180);
    delay(1000);
    mano.write(100);
    delay(1000);    
    break;
    
  }
  if(Serial.available() >= 1)
  {
    letra=Serial.read();
    angulo=Serial.parseInt();
   
    
    Serial.println(letra);
    Serial.println(angulo);
  }
  if(BT.available() >= 1)

  {
    letra=BT.read();
    angulo=BT.parseInt();
    BT.println(letra);
    BT.println(angulo);
    
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
  
