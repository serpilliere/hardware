#include "error.h"

void mapping_error() {
    while (1) {
        HAL_GPIO_TogglePin(GPIOD, LED_ROUGE);
        delay_ms(100);
    }
}

void out_of_range() {
    while (1) {
        HAL_GPIO_TogglePin(GPIOD, LED_ORANGE);
        delay_ms(100);
    }
}
