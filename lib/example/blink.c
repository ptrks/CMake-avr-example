#include <avr/io.h>

void blink() {
	PORTB ^= (1 << PB5);
}