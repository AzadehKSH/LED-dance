

#include <mega32.h>
#include <delay.h>


void main(void)

{
DDRA=0xff;
DDRB=0x00;
while (1)
    { 
 //------------------------------------------key1   
    if(PINB.0==0){
    PORTA=0x01;
    delay_ms(300);
    PORTA=0x80;
    delay_ms(300);
    PORTA=0x02;
    delay_ms(300);
    PORTA=0x40;
    delay_ms(300);
    PORTA=0x04;
    delay_ms(300);
    PORTA=0x20;
    delay_ms(300); 
    PORTA=0x01;
    delay_ms(300);
    PORTA=0x08;
    delay_ms(300);
    PORTA=0x10;
    delay_ms(300);
    while(PINB.0==0);
    }else
    {
    PORTA=0x00;
     }
  //----------------------------------------------  key2
   if(PINB.1==0){
    PORTA=0xff;
    delay_ms(300);
    while(PINB.1==0);
    }else
    {
    PORTA=0x00;
     } 
 //--------------------------------------------------------key3
     if(PINB.2==0){
    PORTA=0xff;
    delay_ms(300);
    PORTA=0x7E;
    delay_ms(300); 
    PORTA=0xff;
    delay_ms(300);
    PORTA=0x3c;
    delay_ms(300);
    PORTA=0xff;
    delay_ms(300);
    PORTA=0x18;
    delay_ms(300);
    while(PINB.2==0);
    }else
    {
    PORTA=0x00;
     }
  //--------------------------------------------------------key4
     if(PINB.3==0){
    PORTA=0x00;
    delay_ms(300);
    PORTA=0xff;
    delay_ms(300); 
    PORTA=0x0f;
    delay_ms(300);
    PORTA=0xf0;
    delay_ms(300);
    PORTA=0x3c;
    delay_ms(300);
    PORTA=0x18;
    delay_ms(300);
    while(PINB.3==0);
    }else
    {
    PORTA=0x00;
     }  
    }
}
