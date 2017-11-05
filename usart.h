#ifndef USART_H
#define USART_H
#define MYUBRR(BAUD) CLOCKSPEED/16/BAUD-1

#define MAX_MESSAGE 20

extern volatile char messageIn[MAX_MESSAGE];
extern volatile unsigned int counterIn;

extern volatile char messageOut[MAX_MESSAGE];
extern volatile unsigned int counterOut;

extern int stringLength;
extern volatile char transmitterBusy;


void USART_Init( unsigned int ubrr);
char* readUART(void);
void printUART(char* str);
void clearMessages(void);

// void USART_Transmit( unsigned char data );
// unsigned char USART_Receive( void );

#endif