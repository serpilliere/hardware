#include "PWM_In.h"



int f_test_capteurs(void) {
	init();
	init_GPIO_LED();
	init_sensor1();

	//test_led();

	HAL_GPIO_TogglePin(GPIOD, LED_ORANGE);
    delay_ms(500);
    HAL_GPIO_TogglePin(GPIOD, LED_ORANGE);

	activate_sensor1();

	//delay_ms(5000);
	//desactivate_sensor1();
	//deinit_capteur1();

	//init_capteur2();

	//activate_sensor2();

	// Infinite loop
	while (1)
	{
		delay_ms(500);
        HAL_GPIO_TogglePin(GPIOD, LED_VERTE);
	}

    return 0;
}

