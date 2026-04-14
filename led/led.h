#ifndef LED_H
#define LED_H

#include<stdint.h>

#define RCC_BASE                     0x40023800UL
#define GPIOD_BASE                   0x40020C00UL
struct gpio_register
{
	uint32_t GPIO_MODER;
	uint32_t GPIOx_OTYPER;
	uint32_t GPIOx_OSPEEDR;
	uint32_t GPIOx_PUPDR;
	uint32_t GPIOx_IDR;
	uint32_t GPIOx_ODR;
	uint32_t GPIOx_BSRR;
	uint32_t GPIOx_LCKR;
	uint32_t GPIOx_AFRL;
	uint32_t GPIOx_AFRH;
};
extern enum gpio_port
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D,
	PORT_E,
};

extern struct gpio_register * gpio_port_array[5] ;


#define RCC_AHB1ENR                  *((volatile uint32_t *)(RCC_BASE + 0x30UL)) //3 bit
//#define GPIOD_MODER					 *((volatile uint32_t *)(GPIOD_BASE + 0x00UL))	// 20 -31 bit
//#define GPIOD_ODR					 *((volatile uint32_t *)(GPIOD_BASE + 0x14UL))	//12-15 bit
extern void setup_init();
extern void delay();
#endif
