#include "config.h"
#include "bits.h"
#include "keypad.h"
#include "atraso.h"
#include "lcd.h"
#include "pic18f4520.h"
#include "receitas.h"


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

if((BitTst(kpRead(), 0 )))
{
    switch(slot)
    {   
        case 1:
           
            cnt = 0;
            slot = 0 ; 
            break; 
    }
}
    
if((BitTst(kpRead(), 3 )))
{
    switch(slot)
    {   
        case 1:
            amber_lager();
            break; 
    }
}
  
    if((BitTst(kpRead(), 8)))
{
    switch(slot)
    {   
        case 0:
            slot = 1; 
            cnt = 1;
            
            break; 
    }  
}
if((BitTst(kpRead(), 7 )))
{
    switch(slot)
    {   
        case 1:
            k_weissbier();
            break; 
    }
}

}


    