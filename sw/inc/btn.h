#ifndef BTN_H
#define BTN_H

/* Black */
#define BTN1_PORT GPIOA
#define BTN1_PIN  GPIO_PIN_1
#define BTN2_PORT GPIOA
#define BTN2_PIN  GPIO_PIN_2
#define BTN3_PORT GPIOA
#define BTN3_PIN  GPIO_PIN_3

void btn_init();
uint8_t btn_read(uint8_t btn);

#endif /* BTN_H */