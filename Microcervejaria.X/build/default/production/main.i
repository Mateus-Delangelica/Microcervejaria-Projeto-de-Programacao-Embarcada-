# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.35/packs/Microchip/PIC18Fxxxx_DFP/1.2.26/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "main.c" 2
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
# 1 "main.c" 2

# 1 "./bits.h" 1
# 2 "main.c" 2

# 1 "./keypad.h" 1
# 23 "./keypad.h"
 unsigned int kpRead(void);
 void kpDebounce(void);
 void kpInit(void);
# 3 "main.c" 2

# 1 "./atraso.h" 1
# 26 "./atraso.h"
void atraso_ms(unsigned int valor);
# 4 "main.c" 2

# 1 "./lcd.h" 1
# 23 "./lcd.h"
 void lcdCommand(unsigned char cmd);
 void lcdData(unsigned char valor);
 void lcdInit(void);
# 5 "main.c" 2

# 1 "./pic18f4520.h" 1
# 6 "main.c" 2

# 1 "./receitas.h" 1
# 11 "./receitas.h"
void k_weissbier(void);
void amber_lager(void);
# 7 "main.c" 2



void escolha();

unsigned int limite;

unsigned int cnt = 0 ;
char slot = 0;

void main(void)
{

lcdInit();
kpInit();



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
    lcdData('M');
    lcdData('I');
    lcdData('C');
    lcdData('R');
    lcdData('O');
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



for(;;)
{
   switch(slot)
   {
       case 0 :

    if(cnt==0){
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
    lcdData('S');
    lcdData('-');
    lcdCommand(0xC0);
    lcdData('1');
    lcdData(0x00);
    lcdData('A');
    lcdData('M');
    lcdData('B');
    lcdData('E');
    lcdData('R');
    lcdData(0x00);
    lcdData('L');
    lcdData('A');
    lcdData('G');
    lcdData('E');
    lcdData('R');
    lcdCommand(0xA8);
    lcdData('2');
    lcdData(0x00);
    lcdData('K');
    lcdData('.');
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
    lcdCommand(0xDC);
    lcdData('(');
    lcdData('#');
    lcdData(')');
    lcdData('~');
    cnt = 10;
    }

    escolha();
    kpDebounce();

           break;

       case 1 :
   if(cnt==1){
   lcdCommand(0x01);
    lcdCommand(0x80);
    lcdData('E');
    lcdData('S');
    lcdData('C');
    lcdData('O');
    lcdData('L');
    lcdData('H');
    lcdData('A');
    lcdData(0x00);
    lcdData('R');
    lcdData('E');
    lcdData('C');
    lcdData('E');
    lcdData('I');
    lcdData('T');
    lcdData('A');
    lcdData(':');
    lcdCommand(0xC4);
    lcdData('(');
    lcdData('1');
    lcdData(')');
    lcdCommand(0xC8);
    lcdData('(');
    lcdData('2');
    lcdData(')');
    lcdCommand(0xD0);
    lcdData(0x7F);
    lcdData('(');
    lcdData('*');
    lcdData(')');
    cnt = 2 ;
           }

    escolha();
    kpDebounce();

           break;

        default:
           slot = 0;
           break;

   }



}

 }


void escolha() {
  int t ;


if(kpRead()!= t)
{
    t = kpRead() ;
}

if((((kpRead()) & (1<<0))))
{
    switch(slot)
    {
        case 1:

            cnt = 0;
            slot = 0 ;
            break;
    }
}

if((((kpRead()) & (1<<3))))
{
    switch(slot)
    {
        case 1:
            amber_lager();
            break;
    }
}

    if((((kpRead()) & (1<<8))))
{
    switch(slot)
    {
        case 0:
            slot = 1;
            cnt = 1;

            break;
    }
}
if((((kpRead()) & (1<<7))))
{
    switch(slot)
    {
        case 1:
            k_weissbier();
            break;
    }
}

}
