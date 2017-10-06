#include <avr/io.h>
#include "main.h"
#include "gpio.h"
//Setting our pin i/o

//The directoriess
void setDDRB(int newDDRB){
	DDRB = newDDRB;
}

void setDDRC(int newDDRC){
	DDRC = newDDRC;
}

void setDDRD(int newDDRD){
	DDRD = newDDRD;
}

//Sensing pins
int senseB(int pin){
	if(PINB & 1<<pin == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int senseC(int pin){
	if(PINC & 1<<pin == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int senseD(int pin){
	if(PIND & 1<<pin == 0){
		return 0;
	}
	else{
		return 1;
	}
}

//Turning our pins on and off, HIGH or LOW
void setB(int pin, int value){
	if(value){
		PORTB &= ~(1<<pin);
	}
	else{
		PORTB |= 1<<pin;
	}
}

void setC(int pin, int value){
	if(value){
		PORTC &= ~(1<<pin);
	}
	else{
		PORTC |= 1<<pin;
	}
}

void setD(int pin, int value){
	if(value){
		PORTD &= ~(1<<pin);
	}
	else{
		PORTD |= 1<<pin;
	}
}

