/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "main.h"
#include "clock.h"
#include "uart1.h"

/* Private defines -----------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

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


    while (1)
    {
        //set 1, read buttons, set leds
        //set 2, read buttons, set leds
        //set 3, read buttons, set leds
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
