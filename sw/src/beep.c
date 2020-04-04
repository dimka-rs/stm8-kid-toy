#include "stm8s.h"
#include "beep.h"

void beep_on()
{
    GPIO_Init(BEEP_PORT, BEEP_PIN, GPIO_MODE_OUT_PP_LOW_SLOW);
}

void beep_off()
{
    GPIO_Init(BEEP_PORT, BEEP_PIN, GPIO_MODE_OUT_PP_HIGH_SLOW);
}