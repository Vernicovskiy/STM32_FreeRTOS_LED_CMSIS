
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"


//-------------------------------------------------------------
void GPIO_Init (void);
void vTaskLed1 (void *argument);


//-------------------------------------------------------------


int main(void)
{

	GPIO_Init();

	xTaskCreate(vTaskLed1, "LED", 128, NULL, 1, NULL );

	vTaskStartScheduler();

	while(1)
	{

	}
}

//---------------------------------------------------------------

void GPIO_Init (void)
{
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; //Тактирование на порт A

		GPIOA->MODER &= ~GPIO_MODER_MODER5; // очистили режим для нужного пина

		GPIOA->MODER |= GPIO_MODER_MODER5_0; // пин на выход

		GPIOA->OSPEEDR |= (GPIO_OSPEEDR_OSPEED5_0 | GPIO_OSPEEDR_OSPEED5_1 ); // скорость very high

		GPIOA->BSRR = GPIO_BSRR_BS5; // установили в высокое состояние
}


void vTaskLed1 (void *argument)
{
	while(1)
	{
			GPIOA-> ODR ^= GPIO_ODR_OD5_Msk;
			vTaskDelay(1000);


	}
}
