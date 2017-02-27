#include<SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BT(2, 3); // RX, TX
Servo Servo_1;
Servo Servo_2;
Servo Servo_3;
Servo Servo_4;
Servo Servo_5;
Servo Servo_6;
Servo Servo_7;

int Angulo_1 = 90;
int Angulo_2_a = 90;
int Angulo_2_b = 90;
int Angulo_3 = 90;
int Angulo_4 = 90;
int Angulo_5 = 90;
int Angulo_6 = 90;
char Estado;
int Tiempo = 10;

void setup()
{
  // put your setup code here, to run once:
  BT.begin(9600);
  Serial.begin(9600);
  Servo_1.attach(4);
  Servo_2.attach(5);
  Servo_3.attach(6);
  Servo_4.attach(7);
  Servo_5.attach(8);
  Servo_6.attach(9);
  Servo_7.attach(10);
}

void loop()
{
  if (BT.available() > 0)
  {
    Estado = BT.read();
  }
  switch (Estado)
  {
    case 'e':
      if (Angulo_1 < 180)
      {
        Angulo_1++;
        Servo_1.write(Angulo_1);
      }
      break;
      
    case 'd':
    if (Angulo_1 > 0)
    {
      Angulo_1--;
      Servo_1.write(Angulo_1);
    }
    break;

    case 'g':
    if (Angulo_2_a < 180)
    {
      Angulo_2_a++;
      Angulo_2_b--;
      Servo_2.write(Angulo_2_a);
      Servo_3.write(Angulo_2_b);
    }
    break;

    case 'f':
    if (Angulo_2_a > 0)
    {
      Angulo_2_a--;
      Angulo_2_b++;
      Servo_2.write(Angulo_2_a);
      Servo_3.write(Angulo_2_b);
    }
    break;

    case 'h':
    if (Angulo_3 < 180)
    {
      Angulo_3++;
      Servo_4.write(Angulo_3);
    }
    break;

    case 'i':
    if (Angulo_3 > 0)
    {
      Angulo_3--;
      Servo_4.write(Angulo_3);
    }
    break;

    case 'j':
    if (Angulo_4 < 180)
    {
      Angulo_4++;
      Servo_5.write(Angulo_4);
    }
    break;

    case 'k':
    if (Angulo_4 > 0)
    {
      Angulo_4--;
      Servo_5.write(Angulo_4);
    }
    break;

     case 'l':
    if (Angulo_5 < 180)
    {
      Angulo_5++;
      Servo_6.write(Angulo_5);
    }
    break;

     case 'm':
    if (Angulo_5 > 0)
    {
      Angulo_5--;
      Servo_6.write(Angulo_5);
    }
    break;

     case 'n':
    if (Angulo_6 < 180)
    {
      Angulo_6++;
      Servo_7.write(Angulo_6);
    }
    break;

     case 'o':
    if (Angulo_6 > 0)
    {
      Angulo_6--;
      Servo_7.write(Angulo_6);
    }
    break;

    case 'p':
    //Funcion 1
    Serial.println("Funcion 1");
    break;

    case 'q':
    //Funcion 2
    Serial.println("Funcion 2");
    break;

    case 'r':
    //Funcion 3
    Serial.println("Funcion 3");
    break;
    
    
  }
  delay(Tiempo);

}
