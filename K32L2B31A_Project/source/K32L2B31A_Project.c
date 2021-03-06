/*! @file : K32L2B31A_Project.c
 * @author  Ernesto Andres Rincon Cruz
 * @version 0.0.000
 * @date    23/08/2021
 * @brief   Funcion principal main
 * @details
 *			v0.0.000	Proyecto base creado usando MCUXpresso
 *
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "K32L2B31A.h"
#include "fsl_debug_console.h"
#include "leds.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Local vars
 ******************************************************************************/

/*******************************************************************************
 * Private Source Code
 ******************************************************************************/

void delay_Block(void){
	uint32_t i;
	for(i=0; i<0xFFFFF; i++){

	}
}
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif
    	int i = 0 ;
        int flag = 0 ;
        /* Enter an infinite loop, just incrementing a counter. */
        while(1) {
            i++ ;

            if(flag == 0){
            	led_on_green();
    			delay_Block();
    			led_off_green();
    			delay_Block();
    			led_off_red();
            }

            if(flag == 1){
            	led_on_green();
				delay_Block();
				led_off_green();
				delay_Block();
				led_on_red();
            }

            if(i == 10){
            	if(flag == 0){
            		flag = 1;
            	}else{
            		flag = 0;
            	}

            	i = 0;
            }
            printf("i:%u\r\n",i);
        }
    return 0 ;
}
