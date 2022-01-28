#include "STD_TYPES.h"

#include "UART_interface.h"

int main(void)
{
	uint8_t local_u8Str[50];//A local array to hold the received string

	/*UART initialization*/
	UART_init();

	while(1)
	{
		/*Receive the string and save it into array*/
		UART_AsynchReceiveStr(&local_u8Str);
		/*Send New line*/
		UART_AsynchSendStr("\n\r");
		/*Send the received data*/
		UART_AsynchSendStr(&local_u8Str);
	}
	return 0;
}
