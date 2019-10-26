#include <ampel.h>
#include <Arduino.h>
#include "LedControl.h"

void phsae_0 (void);
void phsae_1 (void);
void phsae_2 (void);
void phsae_3 (void);
void phsae_4 (void);
void phsae_5 (void);
void phsae_6 (void);
void phsae_7 (void);


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