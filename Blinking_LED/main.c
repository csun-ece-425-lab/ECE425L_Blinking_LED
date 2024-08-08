/**
 * @file main.c
 *
 * @brief Main source code for the Blinking LED program.
 *
 * This file contains the main entry point and function definitions for the Blinking LED program.
 * It interfaces with the user LED (RGB) of the Tiva C Series TM4C123G LaunchPad and provides
 * an example of a basic blinking LED program.
 *
 * To verify the pinout of the user LED, refer to the Tiva C Series TM4C123G LaunchPad User's Guide
 * Link: https://www.ti.com/lit/pdf/spmu296
 *
 * @author Aaron Nanas
 */
 
#include "TM4C123GH6PM.h"
#include "SysTick_Delay.h"
#include "GPIO.h"

int main(void)
{
	SysTick_Delay_Init();

	RGB_LED_Init();

	while(1)
	{
		RGB_LED_Output(RGB_LED_BLUE);
		SysTick_Delay1ms(1000);

		RGB_LED_Output(RGB_LED_OFF);
		SysTick_Delay1ms(1000);
	}
}
