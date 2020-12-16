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

#define degrau_a0 6700
#define degrau_a1 7600
#define fervura 9900

unsigned int vlr = degrau_a0; 
unsigned int tmp=0;
unsigned int cont = 0;
unsigned int i = 1;
unsigned int time = 0; 

void Tecl();

void amber_lager(void) {      
    


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
    
    lcdCommand(0xC5); 
    lcdData('A');
    lcdData('M');
    lcdData('B');
    lcdData('E');
    lcdData('R');
    
    lcdCommand(0xAD);
    lcdData('L');
    lcdData('A');
    lcdData('G');
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
    lcdData('A');
    lcdData('N');
    lcdData('A');
    lcdData('L');
    lcdData(0x00);
    lcdData('D');
    lcdData('O');
    lcdData(0x00);
    lcdData('C');
    lcdData('H');
    lcdData('O');
    lcdData('P');
    lcdData('P');
    
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
    lcdData('4');
    lcdData(',');
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
    lcdData('6');
    
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
    lcdData('N');
    lcdData('A');
    lcdData('C');
    lcdData('I');
    lcdData('O');
    lcdData('N');
    lcdData('A');
    lcdData('L');
   
    
    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('3');
    lcdData(',');
    lcdData('5');
    lcdData('K');
    lcdData('G');
    
    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('7');
    lcdData('1');
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
    lcdData('M');
    lcdData('E');
    lcdData('L');
    lcdData('A');
    lcdData('N');
    lcdData('O');
    lcdData('I');
    lcdData('D');
    lcdData('I');
    lcdData('N');
    lcdData('A');
    
    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('6');
    lcdData('0');
    lcdData('0');
    lcdData('G');
    
    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('1');
    lcdData('2');
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
    lcdData('C');
    lcdData('A');
    lcdData('R');
    lcdData('A');
    lcdData('R');
    lcdData('E');
    lcdData('D');
   
    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('4');
    lcdData('0');
    lcdData('0');
    lcdData('G');
    
    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('8');
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
    lcdData('4');
    lcdData('-');
    
    lcdCommand(0xC0);
    lcdData('C');
    lcdData('A');
    lcdData('R');
    lcdData('A');
    lcdData('P');
    lcdData('I');
    lcdData('L');
    lcdData('S');
    
    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('2');
    lcdData('3');
    lcdData('0');
    lcdData('G');
    
    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('5');
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
    lcdData('5');
    lcdData('-');
    
    lcdCommand(0xC0);
    lcdData('C');
    lcdData('A');
    lcdData('R');
    lcdData('A');
    lcdData('A');
    lcdData('M');
    lcdData('B');
    lcdData('E');
    lcdData('R');
    
    lcdCommand(0xA8);
    lcdData('-');
    lcdData(0x00);
    lcdData('2');
    lcdData('0');
    lcdData('0');
    lcdData('G');
    
    lcdCommand(0xD0);
    lcdData('-');
    lcdData(0x00);
    lcdData('4');
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
    lcdData('1');
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
 tmp++;
 ssdDigit(16 , 3);
 ssdDigit((tmp/100)%10 , 2);
 ssdDigit((tmp/1000)%10, 1);
 ssdUpdate();
 
if(tmp>= vlr)
{
  slot = 1;
}
break;

case 1:
     cont++; 
     tmp = vlr; 
     if((cont==1))
     {
         
     pwmSet2(50);
     atraso_ms(100);
     pwmSet2(0);
     
    if(vlr<=degrau_a0){
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
     
     if((vlr<=(degrau_a0+2))&&( vlr > degrau_a0)) 
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
     vlr = degrau_a0 + 2; 
    } 
     
     if((vlr<=degrau_a1)&&( vlr > (degrau_a0+2))) 
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
     
     if((i==5)&&(vlr<=fervura)) 
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
    pwmSet1(0);
     
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
    vlr = 2500; 
    
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
     if((i==7)&&(vlr<=fervura)) 
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
     i = 10; 
     
    } 
     }
   
     Tecl();
     kpDebounce();
     
     slot = 2; 
     break; 
     
case 2:
    if((vlr >= (degrau_a0+1))&&(i < 9))
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
        switch(vlr)
        {
            
        case (degrau_a0+1):   
            time = 7500;
            break; 
        case (degrau_a0+2):
        vlr = degrau_a1 ; 
        cont = 0; 
        i=1; 
        time = 1000;
            break; 
        case degrau_a1:
        vlr = fervura ; 
        cont = 0; 
        i=5; 
        time = 1000;
            break; 
         
        case fervura:
        cont = 0; 
        i=7; 
        time = 5000;
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




void Tecl() { 
  int t ; 
  
lcdCommand(0x80);

if(kpRead()!= t)
{
    t = kpRead() ;
}

if((BitTst(kpRead(), 8 ))&&(vlr < (degrau_a0+1)))
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
   vlr = (degrau_a0+1);  
   tmp = (degrau_a0+1); 
   cont = 0;
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
   vlr = fervura + 1;
   atraso_ms(550);
}

}

