#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>
#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "timer.h"
#include "interrupts.h"

volatile char executeFlag = 0;

volatile char* str;

void interpret(char* string){
	PORTB |= (1<<5);
}

int main (void){
	DDRB |= (1<<5);
	USART_Init(8);
	sei();

	while(1){
		if(executeFlag){
			interpret(messageIn);
			clearMessages();
			executeFlag = 0;	
		}
	}	

	return 0;
}