#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"

void TIMER0Init(void){
	TCCR0A |= 0b10000011;
	TCCR0B |= 0b1;
	TIMSK0 |= 0b11;
	// We aren't going to mess with the prescaler: GTCCR 
	OCR0A = 0;
	sei();
}

/*void TIMER_Init(int timer){
	switch(timer){
		case 0:
			TCCR0A |=
		case 1:
		case 2:
	}
}
*/