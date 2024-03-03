/*
 * main.c
 *
 *  Created on: Oct 20, 2023
 *      Author: 20109
 */
#include "lcd.h"
#include "ultrasonic.h"

/*******************************************************************************
 *                           Global Variables                                  *
 *******************************************************************************/
uint16 g_Distance=0;

/*
 * Description :
 * Function responsible for displaying the distance on the LCD
 */
void APP_printDistance(void){
	LCD_moveCursor(0,10);
	if(g_Distance<10){
		LCD_intgerToString(g_Distance);
		LCD_displayString("  ");
	}else if(g_Distance<100){
		LCD_intgerToString(g_Distance);
		LCD_displayString(" ");
	}else{
		LCD_intgerToString(g_Distance);
	}
}

int main(void){

	Ultrasonic_init();
	LCD_init();
	LCD_displayString("Distance=");
	LCD_moveCursor(0,13);
	LCD_displayString("cm");
	asm("SEI");

	while(1){
		g_Distance=Ultrasonic_readDistance();
		APP_printDistance();


	}
}

