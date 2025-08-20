

#define  F_CPU  8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


int main(void){
	
	
	DDRD |= (1<<1);
	PORTD&=~(1<<1);
	
	
	
	while(1){
	
	PORTD ^= (1<<1);
	
	}
}
