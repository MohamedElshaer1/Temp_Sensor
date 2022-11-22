 /******************************************************************************
 *
 * Module: Ultrasonic
 *
 * File Name: Ultrasonic.h
 *
 * Description: Header file for the Ultrasonic driver
 *
 * Author: Mohamed Elshaer
 *
 *******************************************************************************/
#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"
#include "gpio.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define Ultrasonic_Trigger_Port           PORTB_ID
#define Ultrasonic_Trigger_Pin            PIN5_ID

#define Ultrasonic_Echo_Port              PORTB_ID
#define Ultrasonic_Echo_Pin               PIN5_ID
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void Ultrasonic_init(void);

void Ultrasonic_Trigger(void);

uint16 Ultrasonic_readDistance(void);

void Ultrasonic_edgeProcessing(void);


#endif /* ULTRASONIC_H_ */
