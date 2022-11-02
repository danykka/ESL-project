#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"

const int FIRST_DIGIT = 6;
const int SECOND_DIGIT = 5;
const int THIRD_DIGIT = 8;
const int FOURTH_DIGIT = 9;

const int FIRST_LED_NUM = 0;
const int SECOND_LED_NUM = 1;
const int THIRD_LED_NUM = 2;
const int FOURTH_LED_NUM = 3;

void blink_n_times(const int n, const int led_number)
{
    for (int i = 0; i < n; i++)
       {
           bsp_board_led_invert(led_number);
           nrf_delay_ms(300);
           bsp_board_led_invert(led_number);
           nrf_delay_ms(300);
       }
       nrf_delay_ms(1000);
}

int main(void)
{
    bsp_board_init(BSP_INIT_LEDS);

    while (true)
    {
        blink_n_times(FIRST_DIGIT, FIRST_LED_NUM);
        blink_n_times(SECOND_DIGIT, SECOND_LED_NUM);
        blink_n_times(THIRD_DIGIT, THIRD_LED_NUM);
        blink_n_times(FOURTH_DIGIT, FOURTH_LED_NUM);
    }
}
