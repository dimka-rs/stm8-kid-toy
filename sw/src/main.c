/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "main.h"
#include "clock.h"
#include "uart1.h"
#include "delay.h"

/* Private defines -----------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
static void all_leds_on(void)
{
    GPIO_WriteLow(LED1_PORT, LED1_PIN);
    GPIO_WriteLow(LED2_PORT, LED2_PIN);
    GPIO_WriteLow(LED3_PORT, LED3_PIN);
}

static void all_leds_off(void)
{
    GPIO_WriteHigh(LED1_PORT, LED1_PIN);
    GPIO_WriteHigh(LED2_PORT, LED2_PIN);
    GPIO_WriteHigh(LED3_PORT, LED3_PIN);
}


void main(void)
{
    // init clock
    clock_init();

    // init uart for mp3 player and debug
    uart1_init();

    // init gpio
    GPIO_Init(COM1_PORT, COM1_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
    GPIO_Init(COM2_PORT, COM2_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
    GPIO_Init(COM3_PORT, COM3_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);

    GPIO_Init(LED1_PORT, LED1_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
    GPIO_Init(LED2_PORT, LED2_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
    GPIO_Init(LED3_PORT, LED3_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);

    GPIO_Init(BTN1_PORT, BTN1_PIN, GPIO_MODE_IN_FL_NO_IT);
    GPIO_Init(BTN2_PORT, BTN2_PIN, GPIO_MODE_IN_FL_NO_IT);
    GPIO_Init(BTN3_PORT, BTN3_PIN, GPIO_MODE_IN_FL_NO_IT);

    // init i2c for IMU

    // init timer 2 for main loop

    // init timer 1 for buzzer

    // DEBUG

    GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_SLOW);

    while (1)
    {
        // DEBUG
        GPIO_WriteReverse(GPIOB, GPIO_PIN_5);
        delay(10000);

        // === set 1 ===
        GPIO_WriteLow(COM2_PORT, COM2_PIN);
        GPIO_WriteLow(COM3_PORT, COM3_PIN);
        GPIO_WriteHigh(COM1_PORT, COM1_PIN);
        //set leds
        all_leds_on();

        //read buttons
        while(GPIO_ReadInputPin(BTN1_PORT, BTN1_PIN));
        while(GPIO_ReadInputPin(BTN2_PORT, BTN2_PIN));
        while(GPIO_ReadInputPin(BTN3_PORT, BTN3_PIN));
        
        // wait for leds to be seen
        delay(10000);
        
        //clear leds
        all_leds_off();

        // === set 2 ===
        GPIO_WriteLow(COM1_PORT, COM1_PIN);
        GPIO_WriteLow(COM3_PORT, COM3_PIN);
        GPIO_WriteHigh(COM2_PORT, COM2_PIN);
        
        //set leds
        all_leds_on();

        //read buttons
        while(GPIO_ReadInputPin(BTN1_PORT, BTN1_PIN));
        while(GPIO_ReadInputPin(BTN2_PORT, BTN2_PIN));
        while(GPIO_ReadInputPin(BTN3_PORT, BTN3_PIN));

        // wait for leds to be seen
        delay(10000);

        //clear leds
        GPIO_WriteLow(COM1_PORT, COM1_PIN);
        GPIO_WriteLow(COM2_PORT, COM2_PIN);
        GPIO_WriteHigh(COM3_PORT, COM3_PIN);

        //set leds
        all_leds_off();


        // === set 3 ===
        all_leds_on();

        //read buttons
        while(GPIO_ReadInputPin(BTN1_PORT, BTN1_PIN));
        while(GPIO_ReadInputPin(BTN2_PORT, BTN2_PIN));
        while(GPIO_ReadInputPin(BTN3_PORT, BTN3_PIN));

        // wait for leds to be seen
        delay(10000);
        //clear leds
        all_leds_off();
    }
}



/***********************************************************************/

/* Interrupt example
void tim4_isr(void) __interrupt(ITC_IRQ_TIM4_OVF) {

}
*/


/* Debug output

int putchar (int c)
{
    // this implementation is SDCC 3.8 specific
    // see sdcc stdio.h for details
    UART1->DR = (uint8_t) c;
    while (!(UART1->SR & UART1_FLAG_TXE));
    return c;
}
*/

// This is called by some of the SPL files on error.
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  (void)file;
  (void)line;

  /* User can add their own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
