#ifndef BEEP_H
#define BEEP_H

#define BEEP_PORT GPIOC
#define BEEP_PIN  GPIO_PIN_3

void beep_on();
void beep_off();

#endif /* BEEP_H */