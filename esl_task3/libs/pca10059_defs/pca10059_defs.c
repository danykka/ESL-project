#include "pca10059_defs.h"

void pins_init()
{
	nrf_gpio_cfg_output(LED_YELLOW);
	nrf_gpio_cfg_output(LED_RED);
	nrf_gpio_cfg_output(LED_BLUE);
	nrf_gpio_cfg_output(LED_GREEN);
	nrf_gpio_cfg_input(BUTTON, NRF_GPIO_PIN_PULLUP);
}

void all_leds_off()
{
	led_turn_off(LED_YELLOW);
	led_turn_off(LED_RED);
	led_turn_off(LED_BLUE);
	led_turn_off(LED_GREEN);
}
