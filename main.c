
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


int main(void){
	
	
	DDRC |= (1<<5);
	PORTC&=~(1<<5);
	
	
	
	while(1){
	
	
	
	}
}
