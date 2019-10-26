#include <Arduino.h>
#include <ampel.h>
#include <funktion.c>
#include "LedControl.h"

LedControl lc=LedControl(11,9,10,1);

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