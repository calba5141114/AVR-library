#ifndef USART_H
#define USART_H
#define MYUBRR(BAUD) CLOCKSPEED/16/BAUD-1

#define MAX_MESSAGE 20

extern volatile char[MAX_MESSAGE] messageIn;
extern volatile unsigned int counterIn;

extern volatile char[MAX_MESSAGE] messageOut;
extern volatile unsigned int counterOut;

extern unsigned int stringLength;
extern volatile char transmitterBusy;


void USART_Init( unsigned int ubrr);
// void USART_Transmit( unsigned char data );
// unsigned char USART_Receive( void );
void printUART(char* str);

#endif