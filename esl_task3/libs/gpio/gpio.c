#include "gpio.h"

void led_turn_on(uint32_t led)
{
	nrf_gpio_pin_write(led, 0);
}

void led_turn_off(uint32_t led)
{
	nrf_gpio_pin_write(led, 1);
}

bool button_status(uint32_t button)
{
	return nrf_gpio_pin_read(button);
}