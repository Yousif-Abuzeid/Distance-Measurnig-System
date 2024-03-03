 /******************************************************************************
 *
 * Module: ULTRASONIC
 *
 * File Name: ultrasonic.h
 *
 * Description: Header file for the Ultrasonic driver
 *
 * Author: Youssef Abuzeid
 *
 *******************************************************************************/


#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"
#include "common_macros.h"



/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define TRIGGER_PORT_ID			PORTB_ID
#define TRIGGER_PIN_ID			PIN5_ID

#define ECHO_PORT_ID			PORTD_ID
#define ECHO_PIN_ID				PIN6_ID

#define F_TIME					1000000UL


void Ultrasonic_init(void);

void Ultrasonic_Trigger(void);

uint16 Ultrasonic_readDistance(void);

void Ultrasonic_edgeProcessing(void);




#endif /* ULTRASONIC_H_ */
