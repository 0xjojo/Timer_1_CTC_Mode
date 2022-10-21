/*
 * GccApplication1.c
 *
 * Created: 10/20/2022 12:45:19 PM
 * Author : gehad
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include "STD_types.h"
#include "BIT_math.h"
#include "TIMER_1_int.h"
#include "DIO_int.h"
#include "LED_int.h"
int main(void)
{
	TIMER_1_voidInit();
	TIMER_1_voidSetDelay(1000);
	TIMER_1_voidStart();
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

ISR(TIMER1_COMPA_vect)
{
	static  u8 counter =0;
	counter++;
	if (counter == 1)
	{
		LED_voidLedOn(2);
		counter = 0;
		
	}
}