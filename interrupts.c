#include <avr/io.h>
#include <avr/interrupt.h>
#include "usart.h"
void function1(void);
//Interrupts are next.

//interrupts are a bit special. We can enable them, but that is about it. The developer has to write the actual code for the interrupt.


void enablePinInterrupt(int interrupt){

	if(interrupt <= 7){
		PCMSK0 |= 1<<interrupt;
		PCICR |= 1<<PCIE0;
	}
	else if(interrupt <= 14){
		PCMSK1 |= 1<<(interrupt - 7);
		PCICR |= 1<<PCIE1;
	}
	else{
		PCMSK2 |= 1<<(interrupt - 14);
		PCICR |= 1<<PCIE2;
	}
	sei();
}
/*Pin Interrupts*/
ISR(PCINT2_vect){

}

/*Timer Interrupts*/
ISR(TIMER0_OVF_vect){
tick++;
}

ISR(TIMER0_COMPA_vect){

}

ISR(TIMER0_COMPB_vect){

}

ISR(TIMER1_OVF_vect){

}

ISR(TIMER1_COMPA_vect){

}

ISR(TIMER1_COMPB_vect){
	
}


ISR(TIMER2_OVF_vect){

}

ISR(TIMER2_COMPA_vect){

}

ISR(TIMER2_COMPB_vect){
	
}

/*USART Interrupts*/

ISR(USART_RX_vect){
	char[MAX_MESSAGE] message;
}

ISR(USART_TX_vect){

}