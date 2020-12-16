# 1 "K_WEISSBIER.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.35/packs/Microchip/PIC18Fxxxx_DFP/1.2.26/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "K_WEISSBIER.c" 2
# 1 "./config.h" 1
# 26 "./config.h"
#pragma config OSC=HS
#pragma config FCMEN = OFF
#pragma config IESO = OFF
#pragma config PWRT = OFF
#pragma config BOREN = OFF
#pragma config BORV = 46
#pragma config WDT=OFF
#pragma config WDTPS = 1
#pragma config MCLRE=ON
#pragma config LPT1OSC = OFF
#pragma config PBADEN = ON
#pragma config CCP2MX = PORTC
#pragma config STVREN = OFF
#pragma config LVP=OFF
#pragma config XINST = OFF
#pragma config DEBUG = OFF

#pragma config CP0 = OFF
#pragma config CP1 = OFF
#pragma config CP2 = OFF
#pragma config CP3 = OFF
#pragma config CPB = OFF
#pragma config CPD = OFF

#pragma config WRT0 = OFF
#pragma config WRT1 = OFF
#pragma config WRT2 = OFF
#pragma config WRT3 = OFF
#pragma config WRTB = OFF
#pragma config WRTC = OFF
#pragma config WRTD = OFF

#pragma config EBTR0 = OFF
#pragma config EBTR1 = OFF
#pragma config EBTR2 = OFF
#pragma config EBTR3 = OFF
#pragma config EBTRB = OFF
# 1 "K_WEISSBIER.c" 2

# 1 "./bits.h" 1
# 2 "K_WEISSBIER.c" 2

# 1 "./ssd.h" 1
# 22 "./ssd.h"
 void ssdDigit(char val, char pos);
 void ssdUpdate(void);
 void ssdInit(void);
# 3 "K_WEISSBIER.c" 2

# 1 "./keypad.h" 1
# 23 "./keypad.h"
 unsigned int kpRead(void);
 void kpDebounce(void);
 void kpInit(void);
# 4 "K_WEISSBIER.c" 2

# 1 "./timer.h" 1
# 23 "./timer.h"
 char timerEnded(void);
 void timerWait(void);

 void timerReset(unsigned int tempo);
 void timerInit(void);
# 5 "K_WEISSBIER.c" 2

# 1 "./atraso.h" 1
# 26 "./atraso.h"
void atraso_ms(unsigned int valor);
# 6 "K_WEISSBIER.c" 2

# 1 "./lcd.h" 1
# 23 "./lcd.h"
 void lcdCommand(unsigned char cmd);
 void lcdData(unsigned char valor);
 void lcdInit(void);
# 7 "K_WEISSBIER.c" 2

# 1 "./pwm.h" 1
# 23 "./pwm.h"
 void pwmSet1(unsigned char porcento);
 void pwmSet2(unsigned char porcento);
 void pwmFrequency(unsigned int freq);
 void pwmInit(void);
# 8 "K_WEISSBIER.c" 2

# 1 "./pic18f4520.h" 1
# 9 "K_WEISSBIER.c" 2

# 1 "./receitas.h" 1
# 11 "./receitas.h"
void k_weissbier(void);
void amber_lager(void);
# 10 "K_WEISSBIER.c" 2
# 19 "K_WEISSBIER.c"
unsigned int valor = 4300;
unsigned int temp=0;
unsigned int cont = 0;
unsigned int i = 1;
unsigned int time = 0;

void Teclado();

void k_weissbier(void) {



char slot;

pwmInit();
ssdInit();
lcdInit();
kpInit();


    lcdCommand(0x01);
    lcdCommand(0x80);

    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');

    lcdCommand(0xC4);
    lcdData('K');
    lcdData('R');
    lcdData('I');
    lcdData('S');
    lcdData('T');
    lcdData('A');
    lcdData('L');
    lcdData('L');

    lcdCommand(0xA8);
    lcdData(0x00);
    lcdData(0x00);
    lcdData(0x00);
    lcdData('W');
    lcdData('E');
    lcdData('I');
    lcdData('S');
    lcdData('S');
    lcdData('B');
    lcdData('I');
    lcdData('E');
    lcdData('R');

    lcdCommand(0xD0);
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    atraso_ms(2000);

    lcdCommand(0x01);
    lcdCommand(0x83);

    lcdData('-');
    lcdData('C');
    lcdData('R');
    lcdData('E');
    lcdData('D');
    lcdData('I');
    lcdData('T');
    lcdData('O');
    lcdData('S');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('C');
    lcdData('E');
    lcdData('R');
    lcdData('V');
    lcdData('E');
    lcdData('J');
    lcdData('A');
    lcdData('R');
    lcdData('I');
    lcdData('A');
    lcdData(0x00);
    lcdData('C');
    lcdData('R');
    lcdData('U');
    lcdData('L');
    lcdData('S');
    atraso_ms(2500);

    lcdCommand(0x01);
    lcdCommand(0x83);

    lcdData('-');
    lcdData('R');
    lcdData('E');
    lcdData('C');
    lcdData('E');
    lcdData('I');
    lcdData('T');
    lcdData('A');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('-');
    lcdData(0x00);
    lcdData('V');
    lcdData('O');
    lcdData('L');
    lcdData('U');
    lcdData('M');
    lcdData('E');
    lcdData(':');
    lcdData(0x00);
    lcdData('2');
    lcdData('0');
    lcdData('L');

    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('A');
    lcdData('B');
    lcdData('V');
    lcdData(':');
    lcdData(0x00);
    lcdData('5');
    lcdData('%');

    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('I');
    lcdData('B');
    lcdData('U');
    lcdData(':');
    lcdData(0x00);
    lcdData('1');
    lcdData('0');

    atraso_ms(3000);

    lcdCommand(0x01);
    lcdCommand(0x83);
    lcdData('-');
    lcdData('M');
    lcdData('A');
    lcdData('L');
    lcdData('T');
    lcdData('E');
    lcdData(0x00);
    lcdData('1');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('P');
    lcdData('I');
    lcdData('L');
    lcdData('S');
    lcdData('E');
    lcdData('N');
    lcdData(0x00);
    lcdData('I');
    lcdData('M');
    lcdData('P');
    lcdData('O');
    lcdData('R');
    lcdData('T');
    lcdData('A');
    lcdData('D');
    lcdData('O');

    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('2');
    lcdData(',');
    lcdData('3');
    lcdData('1');
    lcdData('K');
    lcdData('G');

    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('5');
    lcdData('0');
    lcdData('%');

     atraso_ms(2500);

    lcdCommand(0x01);
    lcdCommand(0x83);
    lcdData('-');
    lcdData('M');
    lcdData('A');
    lcdData('L');
    lcdData('T');
    lcdData('E');
    lcdData(0x00);
    lcdData('2');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('T');
    lcdData('R');
    lcdData('I');
    lcdData('G');
    lcdData('O');

    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('2');
    lcdData(',');
    lcdData('1');
    lcdData('4');
    lcdData('K');
    lcdData('G');

    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('4');
    lcdData('7');
    lcdData('%');

     atraso_ms(2500);

    lcdCommand(0x01);
    lcdCommand(0x83);
    lcdData('-');
    lcdData('M');
    lcdData('A');
    lcdData('L');
    lcdData('T');
    lcdData('E');
    lcdData(0x00);
    lcdData('3');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('M');
    lcdData('E');
    lcdData('L');
    lcdData('A');
    lcdData('N');
    lcdData('O');


    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('1');
    lcdData('4');
    lcdData('0');
    lcdData('G');

    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('3');
    lcdData('%');

    atraso_ms(2500);

    lcdCommand(0x01);
    lcdCommand(0x83);
    lcdData('-');
    lcdData('L');
    lcdData('U');
    lcdData('P');
    lcdData('U');
    lcdData('L');
    lcdData('O');
    lcdData(0x00);
    lcdData('1');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('M');
    lcdData('A');
    lcdData('G');
    lcdData('N');
    lcdData('U');
    lcdData('M');

    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('9');
    lcdData(',');
    lcdData('5');
    lcdData('G');

     atraso_ms(2500);

    lcdCommand(0x01);
    lcdCommand(0x83);
    lcdData('-');
    lcdData('L');
    lcdData('U');
    lcdData('P');
    lcdData('U');
    lcdData('L');
    lcdData('O');
    lcdData(0x00);
    lcdData('2');
    lcdData('-');

    lcdCommand(0xC0);
    lcdData('S');
    lcdData('A');
    lcdData('A');
    lcdData('Z');


    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('3');
    lcdData(',');
    lcdData('2');
    lcdData('G');

     atraso_ms(3000);


    lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('E');
    lcdData('S');
    lcdData('Q');
    lcdData('U');
    lcdData('E');
    lcdData('N');
    lcdData('T');
    lcdData('A');
    lcdData('N');
    lcdData('D');
    lcdData('0');
    lcdData('.');
    lcdData('.');
    lcdData('.');

for (;;){
switch (slot) {
case 0:
 atraso_ms(1);
 temp++;
 ssdDigit(16 , 3);
 ssdDigit((temp/100)%10 , 2);
 ssdDigit((temp/1000)%10, 1);
 ssdUpdate();

if(temp>= valor)
{
  slot = 1;
}
break;

case 1:
     cont++;
     temp = valor;
     if((cont==1))
     {

     pwmSet2(50);
     atraso_ms(100);
     pwmSet2(0);

    if(valor<=4300){
    lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('I');
    lcdData('N');
    lcdData('S');
    lcdData('I');
    lcdData('R');
    lcdData('A');
    lcdData(0x00);
    lcdData('O');
    lcdData('S');
    lcdData(0x00);
    lcdData('M');
    lcdData('A');
    lcdData('L');
    lcdData('T');
    lcdData('E');
    lcdData('S');
    lcdCommand(0xDB);
    lcdData('O');
    lcdData('K');
    lcdData('(');
    lcdData('#');
    lcdData(')');
     }

     if((valor<=(4300 +2))&&( valor > 4300))
    {
    lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('D');
    lcdData('E');
    lcdData('G');
    lcdData('R');
    lcdData('A');
    lcdData('U');
    lcdData(0x00);
    lcdData('0');
     valor = 4300 + 2;
    }

     if((valor<=7800)&&( valor > (4300 +2)))
    {
    lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('D');
    lcdData('E');
    lcdData('G');
    lcdData('R');
    lcdData('A');
    lcdData('U');
    lcdData(0x00);
    lcdData(i + 0x30);
    }

     if((i==5)&&(valor<=9900))
    {
    lcdCommand(0x01);
    lcdCommand(0x85);
    lcdData('F');
    lcdData('E');
    lcdData('R');
    lcdData('V');
    lcdData('U');
    lcdData('R');
    lcdData('A');
    lcdCommand(0xC0);
    lcdData('I');
    lcdData('N');
    lcdData('S');
    lcdData('I');
    lcdData('R');
    lcdData('A');
    lcdData(0x00);
    lcdData('L');
    lcdData('U');
    lcdData('P');
    lcdData('U');
    lcdData('L');
    lcdData('0');
    lcdData(0x00);
    lcdData('1');
    lcdCommand(0xDB);
    lcdData('O');
    lcdData('K');
    lcdData('(');
    lcdData('#');
    lcdData(')');
     pwmSet1(0);
     i = 9;

    }

     if((i==6)||(i==8))
    {
    lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('F');
    lcdData('E');
    lcdData('R');
    lcdData('V');
    lcdData('U');
    lcdData('R');
    lcdData('A');

    if(i==8)
    {
    lcdCommand(0x01);
    lcdCommand(0xC0);

    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');

    lcdCommand(0xA8);
    lcdData('F');
    lcdData('I');
    lcdData('M');
    lcdData(0x00);
    lcdData('D');
    lcdData('A');
    lcdData(0x00);
    lcdData('B');
    lcdData('R');
    lcdData('A');
    lcdData('S');
    lcdData('S');
    lcdData('A');
    lcdData('G');
    lcdData('E');
    lcdData('M');


    lcdCommand(0xD0);
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    lcdData('-');
    valor = 2500;

     pwmSet2(50);
     atraso_ms(50);
     pwmSet2(0);
     atraso_ms(200);
     pwmSet2(50);
     atraso_ms(50);
     pwmSet2(0);
     atraso_ms(200);
     pwmSet2(50);
     atraso_ms(50);
     pwmSet2(0);
     atraso_ms(200);
     pwmSet2(50);
     atraso_ms(50);
     pwmSet2(0);
    }

    }
     if((i==7)&&(valor<=9900))
    {
    lcdCommand(0x01);
    lcdCommand(0x85);
    lcdData('F');
    lcdData('E');
    lcdData('R');
    lcdData('V');
    lcdData('U');
    lcdData('R');
    lcdData('A');
    lcdCommand(0xC0);
    lcdData('I');
    lcdData('N');
    lcdData('S');
    lcdData('I');
    lcdData('R');
    lcdData('A');
    lcdData(0x00);
    lcdData('L');
    lcdData('U');
    lcdData('P');
    lcdData('U');
    lcdData('L');
    lcdData('0');
    lcdData(0x00);
    lcdData('2');
    lcdCommand(0xDB);
    lcdData('O');
    lcdData('K');
    lcdData('(');
    lcdData('#');
    lcdData(')');
     pwmSet1(0);
     i = 10;

    }
     }

     Teclado();
     kpDebounce();

     slot = 2;
     break;

case 2:
    if((valor >= (4300 +1))&&(i < 9))
    {

    lcdCommand(0xC0);
    lcdData((time/1000)%10 + '0');
    lcdData((time/100)%10 + '0');
    lcdData(0x00);
    lcdData('m');
    lcdData('i');
    lcdData('n');

    if(time != 0 )
    {
      time --;
     }

    else
    {
        switch(valor)
        {

        case (4300 +1):
            time = 2000;
            break;
        case (4300 +2):
        valor = 5200 ;
        cont = 0;
        i=1;
        time = 1500;
            break;
        case 5200:
        valor = 6500 ;
        cont = 0;
        i=2;
        time = 4000;
            break;
        case 6500:
        valor = 7200 ;
        cont = 0;
        i=3;
        time = 2000;
            break;
        case 7200:
        valor = 7800 ;
        cont = 0;
        i=4;
        time = 1000;
            break;
        case 7800:
        valor = 9900 ;
        cont = 0;
        i=5;
        time = 1100;
            break;
        case 9900:
        cont = 0;
        i=7;
        time = 1000;
            break;
        case (9900 +1):
        cont = 0;
        i=8;
            break;

        }
    }

   }
  slot = 0 ;

  break;

default:
slot = 0;
break;

    }

 }

}




void Teclado() {
  int t ;

lcdCommand(0x80);

if(kpRead()!= t)
{
    t = kpRead() ;
}

if((((kpRead()) & (1<<8)))&&(valor < (4300 +1)))
{
   lcdCommand(0x01);
   lcdData('M');
   lcdData('A');
   lcdData('L');
   lcdData('T');
   lcdData('E');
   lcdData('S');
   lcdData(0x00);
   lcdData('I');
   lcdData('N');
   lcdData('S');
   lcdData('E');
   lcdData('R');
   lcdData('I');
   lcdData('D');
   lcdData('O');
   lcdData('S');
   pwmSet1(50);
   valor = (4300 +1);
   temp = (4300 +1);
   cont = 0;
   atraso_ms(550);
}

if((i == 9 )&&(((kpRead()) & (1<<8))))
{
   lcdCommand(0x01);
   lcdData('L');
   lcdData('U');
   lcdData('P');
   lcdData('U');
   lcdData('L');
   lcdData('O');
   lcdData(0x00);
   lcdData('I');
   lcdData('N');
   lcdData('S');
   lcdData('E');
   lcdData('R');
   lcdData('I');
   lcdData('D');
   lcdData('O');
   cont = 0;
   i = 6;
   atraso_ms(550);
}

if((i == 10 )&&(((kpRead()) & (1<<8))))
{
   lcdCommand(0x01);
   lcdData('L');
   lcdData('U');
   lcdData('P');
   lcdData('U');
   lcdData('L');
   lcdData('O');
   lcdData(0x00);
   lcdData('I');
   lcdData('N');
   lcdData('S');
   lcdData('E');
   lcdData('R');
   lcdData('I');
   lcdData('D');
   lcdData('O');
   cont = 0;
   i = 6;
   valor = 9900 + 1;
   atraso_ms(550);
}

}
