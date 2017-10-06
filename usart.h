#ifndef USART_H
#define USART_H
#define MYUBRR(BAUD) CLOCKSPEED/16/BAUD-1

#define MAX_MESSAGE 20
void USART_Init( unsigned int ubrr);
void USART_Transmit( unsigned char data );
unsigned char USART_Receive( void );

#endif