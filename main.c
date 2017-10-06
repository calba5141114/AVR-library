#include <avr/io.h>
#include <avr/interrupt.h>
#include "main.h"
#include "usart.h"
#include "gpio.h"
#include "timer.h"
#include "interrupts.h"


int main (void){

	USART_Init(MYUBRR(9600));
	setDDRB(0b100000);
	// setB(5,0);
	while(1){
		printUART("Hello World/r/n");
	}
	return 0;
}