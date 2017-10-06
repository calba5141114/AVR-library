#include <avr/io.h>
#include <avr/interrupt.h>
#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "timer.h"
#include "interrupts.h"


int main (void){

	USART_Init(MYUBRR(9600));

	while(1){
		USART_Transmit('1');
	}
	return 0;
}