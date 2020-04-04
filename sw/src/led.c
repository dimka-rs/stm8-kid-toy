#include "stm8s.h"
#include "led.h"

void
led_on(uint8_t led)
{
    switch(led)
    {
        case 0:
            GPIO_Init(LED1_PORT, LED1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED2_PORT, LED2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED3_PORT, LED3_PIN, GPIO_MODE_IN_FL_NO_IT);
            break;
        case 1:
            GPIO_Init(LED2_PORT, LED2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED3_PORT, LED3_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED1_PORT, LED1_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
            break;
        case 2:
            GPIO_Init(LED1_PORT, LED1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED3_PORT, LED3_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED2_PORT, LED2_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
            break;
        case 3:
            GPIO_Init(LED1_PORT, LED1_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED2_PORT, LED2_PIN, GPIO_MODE_IN_FL_NO_IT);
            GPIO_Init(LED3_PORT, LED3_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
            break;
    }
}