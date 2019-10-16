#include "stm8s.h"
#include "delay.h"

void delay(volatile uint32_t cnt)
{
    while(cnt--);
}


