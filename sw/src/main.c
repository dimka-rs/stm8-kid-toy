/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "main.h"
#include "clock.h"
#include "uart1.h"
#include "delay.h"
#include "led.h"
#include "btn.h"
#include "beep.h"

/* Private defines -----------------------------------------------------------*/
#define DELAY_BLINK 10000
#define DELAY_CYCLE 30000

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
static void sel_row(uint8_t row)
{
    switch(row)
    {
        case 0:
            GPIO_Init(COM1_PORT, COM1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM2_PORT, COM2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM3_PORT, COM3_PIN, GPIO_MODE_IN_FL_NO_IT);
            break;
        case 1:
            GPIO_Init(COM2_PORT, COM2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM3_PORT, COM3_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM1_PORT, COM1_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
            break;
        case 2:
            GPIO_Init(COM1_PORT, COM1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM3_PORT, COM3_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM2_PORT, COM2_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
            break;
        case 3:
            GPIO_Init(COM1_PORT, COM1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM2_PORT, COM2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(COM3_PORT, COM3_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
            break;
    }
}

void main(void)
{
    // init clock
    clock_init();

    // init uart for mp3 player and debug
    uart1_init();

    // init buttons
    btn_init();

    // init i2c for IMU

    // init timer 2 for main loop

    // init timer 1 for buzzer

    // DEBUG
    GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_SLOW);

    // scan rows
    uint8_t r = 0;
    while (1)
    {
        led_off_all();
        if(++r > 3)
            r = 1;
        sel_row(r);

        if(btn_read(1) || btn_read(2) || btn_read(3))
        {
            led_on_all();
            beep_on();
            delay(DELAY_BLINK);
            beep_off();
            led_off_all();
        }

        delay(DELAY_CYCLE);
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
