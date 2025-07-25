#include "stm32f3xx.h"
#include "uart.h"
#include <string.h>

#define SYSCLK 8000000
#define BAUD_RATE 115200


int main(void){

	usart2_init(SYSCLK, BAUD_RATE);
	while(1){
		printf("Hello there boiiiiiii....\n\r");
	}
}
