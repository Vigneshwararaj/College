#include<lpc214x.h>
#include<stdio.h>
void delay();

int main(){
    PINSEL0 = 0x00000005;//Using for UART
    PINSEL1 = 0x00000000;//Using for GPIO
    PINSEL2 = 0x00000000;
    
        U0LCR = 0x83; //before setting baud
        U0DLL = 97; //setting baud
        U0LCR = 0x03; //on
        while(!(U0LSR & 0x20));
    
        IO1DIR = (0<<17);//setting pin P1.17 as input
        while(1)
        {
            if((IOPIN1&(1<<17))) // when pin 1.17 is pressed print
            {
                while(!(U0LSR & 0x20));// check if register has input
                U0THR = 'd'; // a is sent to register
            }
        }
    
}



