#include "stm8s.h"
#include "btn.h"

void
btn_init()
{
    GPIO_Init(BTN1_PORT, BTN1_PIN, GPIO_MODE_IN_FL_NO_IT);
    GPIO_Init(BTN2_PORT, BTN2_PIN, GPIO_MODE_IN_FL_NO_IT);
    GPIO_Init(BTN3_PORT, BTN3_PIN, GPIO_MODE_IN_FL_NO_IT);
}

uint8_t
btn_read(uint8_t btn)
{
    switch (btn)
    {
        case 1:
            return GPIO_ReadInputPin(BTN1_PORT, BTN1_PIN);
        case 2:
            return GPIO_ReadInputPin(BTN2_PORT, BTN2_PIN);
        case 3:
            return GPIO_ReadInputPin(BTN3_PORT, BTN3_PIN);
        default:
            return 0;
    }
}