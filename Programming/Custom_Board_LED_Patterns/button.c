/*
 * button.c
 *
 * Created: 12/22/2024 7:51:17 PM
 *  Author: paul.contis
 */ 

#include <avr/io.h>
#include "global.h"
#include <util/delay.h>
#include "button.h"
#include <avr/interrupt.h>
#include "main.h"

BOOL button_was_pressed = FALSE;

ISR(INT0_vect)
{
	if((BUTTON_IS_PRESSED()) && (!button_was_pressed)) button_was_pressed = TRUE;
	if(!(BUTTON_IS_PRESSED()) && (button_was_pressed)) {
		if(state == STATE_1) state = STATE_2;
		else if(state == STATE_2) state = STATE_3;
		else if(state == STATE_3) state = STATE_4;
		else if(state == STATE_4) state = STATE_1;
		button_was_pressed = FALSE;
	}
}
