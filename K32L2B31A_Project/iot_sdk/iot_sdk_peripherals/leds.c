/*! @file : leds.c
 * @author  Daniel Antonio Garcia Arias
 * @version 1.0.0
 * @date    2 sep. 2021
 * @brief   Driver para controlar leds de tarjetas FRDM-K32L2B3
 * @details
 *
*/
/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "leds.h"
#include "fsl_gpio.h"
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


/*******************************************************************************
 * Public Source Code
 ******************************************************************************/
/* !
 * @brief enciende led verde de targeta FRDM-K32L2B3
 */
 void led_on_green(){
	 GPIO_PinWrite(GPIOD, 5, 0);
 }
 /*-----------------------------------------------------------------------------------------------------*/
 /* !
  * @brief apaga led verde de targeta FRDM-K32L2B3
  */
 void led_off_green(){
	 GPIO_PinWrite(GPIOD, 5, 1);
 }
 /*-----------------------------------------------------------------------------------------------------*/
  /* !
   * @brief apaga led verde de targeta FRDM-K32L2B3
   */
  void led_on_red(){
	  GPIO_PinWrite(GPIOE, 31U, 0);
  }
  /*-----------------------------------------------------------------------------------------------------*/
   /* !
    * @brief apaga led verde de targeta FRDM-K32L2B3
    */
   void led_off_red(){
 	  GPIO_PinWrite(GPIOE, 31U, 1);
   }
