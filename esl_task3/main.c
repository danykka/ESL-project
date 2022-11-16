#include "libs/pca10059_defs/pca10059_defs.h"
#include "libs/gpio/gpio.h"
#include "nrf_delay.h"
#include <nrf_gpio.h>

int main()
{
	uint32_t sequence[] = {LED_RED, LED_BLUE, LED_GREEN, LED_YELLOW};
	pins_init();
	all_leds_off();
	while(true) {
		for(uint32_t i = 0; i < NRFX_ARRAY_SIZE(sequence); i++) {
			if(button_pressed(BUTTON)) {
				led_turn_on(sequence[i]);
				nrf_delay_ms(300);
				led_turn_off(sequence[i]);
				nrf_delay_ms(300);
			}
		}
	}
}


