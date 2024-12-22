/*
 * button.h
 *
 * Created: 12/22/2024 7:50:35 PM
 *  Author: paul.contis
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

/*************************************************************************/
typedef unsigned char   BOOL;
#define BUTTON_DDR				DDRD
#define BUTTON_PORT				PORTD
#define BUTTON_PIN				PIND
#define BUTTON_BIT              PD2
/*************************************************************************/

#define SETUP_BUTTON()	BUTTON_DDR &= ~(1 << BUTTON_BIT); BUTTON_PORT |= (1 << BUTTON_BIT);

#define BUTTON_IS_PRESSED()      ((BUTTON_PIN & (1 << BUTTON_BIT)) == 0)

BOOL is_button_pressed ( void );


#endif /* BUTTON_H_ */