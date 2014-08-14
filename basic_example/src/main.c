
/* Example of CMake usage with AVR. Shows how to add lib directories and  include in main program */
#include <avr/io.h>
#include "blink.h"
#include "wait.h"


int main(void)
{
	/* Sets PORT B.5 as an output */
    DDRB |= (1 << PB5);
    while(1){
        blink();
        wait();
    }

}
