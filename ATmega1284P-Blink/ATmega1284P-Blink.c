/*
 * ATmega1284P-Blink.c
 *
 * Created: 4/25/2022 10:47:59 PM
 * Author : Lauren Crist
 */ 

#define F_CPU 1000000UL // Define the CPU clock speed as 1 MHz (UL stands for unsigned long)
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRC |= (1 << PINC2); // Set the data direction of Pin 2 on Port C as output
    
    while (1)
    {
        PORTC ^= (1 << PINC2); // Toggle the state of Pin 2 on Port C
        _delay_ms(100); // Delay for 100 milliseconds
    }
}
