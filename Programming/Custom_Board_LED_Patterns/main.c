/*
 * Custom_Board_LED_Patterns.c
 *
 * Created: 12/22/2024 7:07:11 PM
 * Author : paul.contis
 */ 

#include <avr/io.h>
#include "global.h"
#include <util/delay.h>
#include "leds.h"
#include "button.h"
#include "main.h"
#include "setup.h"

unsigned char state = STATE_1;

int main(void) {
	
	setup();
	
	while (1)
	{

		if(state == STATE_1) all_leds_blink();
		if(state == STATE_2) blink_left_to_right();
		if(state == STATE_3) blink_right_to_left();
		if(state == STATE_4) blink_odd_vs_notOdd();
		_delay_ms(2);
	}
	
	return 0;
}