/*
 * setup.c
 *
 * Created: 12/22/2024 7:57:12 PM
 *  Author: paul.contis
 */ 

#include <avr/io.h>
#include "button.h"
#include "leds.h"
#include <avr/interrupt.h>
#include "main_helper.h"

void setup() {
	SETUP_BUTTON();
	SETUP_LEDS();
	
	EICRA |= (1 << ISC00) ; // ANYLOGIC edge for INT0
	EIMSK  |= (1 << INT0 ) ;
	sei();
	
	prepare_leds_shift_format();
}