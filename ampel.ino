#include "LedControl.h"

#define a1_red 2
#define a1_yellow 3
#define a1_green 4
#define a2_red 5
#define a2_yellow 6
#define a2_green 7
#define a3_red 8
#define a3_yellow 9
#define a3_green 10
#define a4_red 11
#define a4_yellow 12
#define a4_green 13
#define yellow_time 2000
#define red_time 2000
#define green_time 4000 
#define panik_end 2000

void phsae_0 (void);
void phsae_1 (void);
void phsae_2 (void);
void phsae_3 (void);
void phsae_4 (void);
void phsae_5 (void);
void phsae_6 (void);
void phsae_7 (void);
LedControl lc=LedControl(11,9,10,1);

int ipanik ();

void setup() 
{
  pinMode(a1_red,OUTPUT);
  pinMode(a1_yellow,OUTPUT);
  pinMode(a1_green,OUTPUT);
  pinMode(a2_red,OUTPUT);
  pinMode(a2_yellow,OUTPUT);
  pinMode(a2_green,OUTPUT);
  pinMode(a3_red,OUTPUT);
  pinMode(a3_yellow,OUTPUT);
  pinMode(a3_green,OUTPUT);
  pinMode(a4_red,OUTPUT);
  pinMode(a4_yellow,OUTPUT);
  pinMode(a4_green,OUTPUT);
  lc.shutdown(0,false);
  lc.setIntensity(0,8);
  lc.clearDisplay(0);
}

void loop() 
{
  int phase = 0;
  lc.setRow(0,0,0);
  lc.setRow(0,1,0);
  lc.setRow(0,2,0);
  lc.setRow(0,3,0);
  lc.setRow(0,4,0);
  lc.setRow(0,5,0);
  lc.setRow(0,6,0);
  lc.setRow(0,7,0);
  
  while(phase < 8)
  {
    if ((phase == 0)||(phase == 5))
    {
      if (analogRead(0)>200)
      {
        ipanik();
      }
    }
    switch (phase)
    {
        case 0: phsae_0() ;break;
        case 1: phsae_1() ;break;
        case 2: phsae_2() ;break;
        case 3: phsae_3() ;break;
        case 4: phsae_4() ;break;
        case 5: phsae_5() ;break;
        case 6: phsae_6() ;break;
        case 7: phsae_7() ;break;
    }
    phase ++;
  }
}

int ipanik ()
{
    int ret=0;
    while (analogRead(0)>200)
    {
        byte a[8]={B00000000,B00011000,B00011000,B01111110,B01111110,B00011000,B00011000,B00000000};
        byte b[8]={B00000000,B00000000,B00000000,B11111011,B11111011,B00000000,B00000000,B00000000};
        digitalWrite(a1_red,HIGH);
        digitalWrite(a1_yellow,LOW);
        digitalWrite(a1_green,LOW);
        digitalWrite(a2_red,HIGH);
        digitalWrite(a2_yellow,LOW);
        digitalWrite(a2_green,LOW);
        digitalWrite(a3_red,HIGH);
        digitalWrite(a3_yellow,LOW);
        digitalWrite(a3_green,LOW);
        digitalWrite(a4_red,HIGH);
        digitalWrite(a4_yellow,LOW);
        digitalWrite(a4_green,LOW);
        delay(200);

        lc.setRow(0,0,a[0]);
        lc.setRow(0,1,a[1]);
        lc.setRow(0,2,a[2]);
        lc.setRow(0,3,a[3]);
        lc.setRow(0,4,a[4]);
        lc.setRow(0,5,a[5]);
        lc.setRow(0,6,a[6]);
        lc.setRow(0,7,a[7]);

        delay(1000);

        lc.setRow(0,0,b[0]);
        lc.setRow(0,1,b[1]);
        lc.setRow(0,2,b[2]);
        lc.setRow(0,3,b[3]);
        lc.setRow(0,4,b[4]);
        lc.setRow(0,5,b[5]);
        lc.setRow(0,6,b[6]);
        lc.setRow(0,7,b[7]);

        delay(1000);
    }
    lc.setRow(0,0,0);
    lc.setRow(0,1,0);
    lc.setRow(0,2,0);
    lc.setRow(0,3,0);
    lc.setRow(0,4,0);
    lc.setRow(0,5,0);
    lc.setRow(0,6,0);
    lc.setRow(0,7,0);
    delay(panik_end);
    return ret;
}

void phsae_0 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,LOW);

    delay(red_time);
}
void phsae_1 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,HIGH);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,HIGH);
    digitalWrite(a4_green,LOW);

    delay(yellow_time);
}
void phsae_2 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,LOW);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,HIGH);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,LOW);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,HIGH);

    delay(green_time);
}
void phsae_3 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,LOW);
    digitalWrite(a2_yellow,HIGH);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,LOW);
    digitalWrite(a4_yellow,HIGH);
    digitalWrite(a4_green,LOW);

    delay(yellow_time);
    }
void phsae_4 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,LOW);

    delay(red_time);
}
void phsae_5 (void)
{
    digitalWrite(a1_red,HIGH);
    digitalWrite(a1_yellow,HIGH);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,HIGH);
    digitalWrite(a3_yellow,HIGH);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,LOW);

    delay(yellow_time);
}
void phsae_6 (void)
{
    digitalWrite(a1_red,LOW);
    digitalWrite(a1_yellow,LOW);
    digitalWrite(a1_green,HIGH);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,LOW);
    digitalWrite(a3_yellow,LOW);
    digitalWrite(a3_green,HIGH);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,LOW);

    delay(green_time);
}
void phsae_7 (void)
{
    digitalWrite(a1_red,LOW);
    digitalWrite(a1_yellow,HIGH);
    digitalWrite(a1_green,LOW);
    digitalWrite(a2_red,HIGH);
    digitalWrite(a2_yellow,LOW);
    digitalWrite(a2_green,LOW);
    digitalWrite(a3_red,LOW);
    digitalWrite(a3_yellow,HIGH);
    digitalWrite(a3_green,LOW);
    digitalWrite(a4_red,HIGH);
    digitalWrite(a4_yellow,LOW);
    digitalWrite(a4_green,LOW);

    delay(yellow_time);
}
