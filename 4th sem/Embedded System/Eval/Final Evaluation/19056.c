#include<lpc214x.h>
#include "delay.h" // Add delay.h file to the Project Folder and then Compile the Project
#include<string.h>
void UART0_Init(void);
void UART0_Write(const char value);
void UART0_Write_String(const char msg[]);
int main() 
{
    int  button1=0;
    PINSEL0=0x00000000;
		PINSEL1=0x00;
		PINSEL2=0x00;  
		IODIR0 = 0xffffffff;
		IODIR1 = 0xfffd0000;
		IOSET1=0x0;
		IOSET0=0x0;
    UART0_Init();
    while(1)
      {

        IOCLR1=0xffffffff;
       button1 = (IOPIN1>>30) & 0x01; 

       if(button1 == 1)
       {
            UART0_Write_String("d ");
				    IOPIN1=0;
            delay_ms(10000);
       }
    }
}
void UART0_Init()
{
    //Assign P0.0 as TXD and P0.1 as RXD
    PINSEL0 |= ((1<<0) | (1<<2));
    //UART0 Line Control Register, used to configure Serial Port Parameters
    U0LCR = 0x83;
    //U0DLL and U0DLM Values to be loaded, to get Baud Rate of 9600bps
    U0DLL = 0XC3;
    U0DLM = 0X00;

      U0LCR = 0X03;   
}

void UART0_Write(const char value)
{
    /*TEMT (Transmitter Empty)
    TEMT = 0 --> U0THR and U0TSR Contains Some Valid Data
    TEMT = 1 --> U0THR and U0TSR are Empty
    */
    while((U0LSR&0x20) == 0);
    //While U0THR Contains Some Valid Data Stay Here
    U0THR = value;
}
void UART0_Write_String(const char msg[])
{
    #ifndef LENGTH_UART
        #define LENGTH_UART
        int len_uart;
        int i_uart;
    #endif
    len_uart = strlen(msg);
    for(i_uart=0;i_uart<len_uart;i_uart++)
    {
        UART0_Write(msg[i_uart]);
    }
}