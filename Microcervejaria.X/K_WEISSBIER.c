#include "config.h"
#include "bits.h"
#include "ssd.h"
#include "keypad.h"
#include "timer.h"
#include "atraso.h"
#include "lcd.h"
#include "pwm.h"
#include "pic18f4520.h"
#include "receitas.h"

#define degrau0 4300
#define degrau1 5200
#define degrau2 6500
#define degrau3 7200
#define degrau4 7800
#define fervura 9900

unsigned int valor = degrau0; 
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
     
    if(valor<=degrau0){
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
     
     if((valor<=(degrau0+2))&&( valor > degrau0)) 
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
     valor = degrau0 + 2; 
    } 
     
     if((valor<=degrau4)&&( valor > (degrau0+2))) 
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
     
     if((i==5)&&(valor<=fervura)) 
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
     if((i==7)&&(valor<=fervura)) 
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
    if((valor >= (degrau0+1))&&(i < 9))
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
            
        case (degrau0+1):   
            time = 2000;
            break; 
        case (degrau0+2):
        valor = degrau1 ; 
        cont = 0; 
        i=1; 
        time = 1500;
            break; 
        case degrau1:
        valor = degrau2 ; 
        cont = 0; 
        i=2; 
        time = 4000;
            break; 
        case degrau2:
        valor = degrau3 ; 
        cont = 0; 
        i=3; 
        time = 2000;
            break; 
        case degrau3:
        valor = degrau4 ; 
        cont = 0; 
        i=4; 
        time = 1000;
            break; 
        case degrau4:
        valor = fervura ; 
        cont = 0; 
        i=5; 
        time = 1100;
            break; 
        case fervura:
        cont = 0; 
        i=7; 
        time = 1000;
            break; 
        case (fervura+1):
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

if((BitTst(kpRead(), 8 ))&&(valor < (degrau0+1)))
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
   valor = (degrau0+1);  
   temp = (degrau0+1); 
   cont = 0;
   atraso_ms(550);
}

if((i == 9 )&&(BitTst(kpRead(), 8 )))
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

if((i == 10 )&&(BitTst(kpRead(), 8 )))
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
   valor = fervura + 1;
   atraso_ms(550);
}

}


 