#include "led.h"
enum gpio_port
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D,
	PORT_E,
};
struct gpio_register *  gpio_port_array[5] =
{
		(struct gpio_register *) 0x40020000UL,
		(struct gpio_register *) 0x40020400UL,
		(struct gpio_register *) 0x40020800UL,
		(struct gpio_register *) 0x40020C00UL,
		(struct gpio_register *) 0x40020100UL,
};

void delay()
{
	int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<1000;j++);
	}
}

void setup_init()
{
	RCC_AHB1ENR = RCC_AHB1ENR |0x00000008;
	gpio_port_array[PORT_D]->GPIO_MODER = gpio_port_array[PORT_D]->GPIO_MODER |(0x55000000UL);
	gpio_port_array[PORT_D]->GPIOx_ODR = gpio_port_array[PORT_D]->GPIOx_ODR |(0x0000FF00UL);
}
