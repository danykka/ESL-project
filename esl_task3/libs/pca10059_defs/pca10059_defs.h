#ifndef _PCA10059_DEFS_H__
#define _PCA10059_DEFS_H__

#include <nrf_gpio.h>
#include "libs/gpio/gpio.h"

#define LED_YELLOW NRF_GPIO_PIN_MAP(0, 6)
#define LED_RED NRF_GPIO_PIN_MAP(0, 8)
#define LED_GREEN NRF_GPIO_PIN_MAP(0, 12)
#define LED_BLUE NRF_GPIO_PIN_MAP(1, 9)
#define BUTTON NRF_GPIO_PIN_MAP(1, 6)

void pins_init();

void all_leds_off();

#endif