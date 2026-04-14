#include"led/led.h"


int main(void)
{
	setup_init();
	while(1)
	{
		gpio_port_array[PORT_D]->GPIOx_ODR = gpio_port_array[PORT_D]->GPIOx_ODR  |(0x0000FF00UL);
		delay();
		gpio_port_array[PORT_D]->GPIOx_ODR = gpio_port_array[PORT_D]->GPIOx_ODR & ~(0x0000FF00UL);
		delay();
	}
}