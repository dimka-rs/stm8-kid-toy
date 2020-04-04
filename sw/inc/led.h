#ifndef LED_H
#define LED_H

/* Red */
#define LED1_PORT GPIOC
#define LED1_PIN  GPIO_PIN_5
#define LED2_PORT GPIOC
#define LED2_PIN  GPIO_PIN_6
#define LED3_PORT GPIOC
#define LED3_PIN  GPIO_PIN_7

void led_on(uint8_t led);
void led_on_all();
void led_off_all();

#endif /* LED_H */
