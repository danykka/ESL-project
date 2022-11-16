#ifndef _GPIO_H__
#define _GPIO_H__

#include <stdint.h>
#include <stdbool.h>
#include <nrf_gpio.h>

void led_turn_on(uint32_t led);

void led_turn_off(uint32_t led);

bool button_pressed(uint32_t button);

#endif
