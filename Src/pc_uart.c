#include "stdint.h"
#include "main.h"
#include "stdio.h"


#pragma import(__use_no_semihosting_swi)


extern UART_HandleTypeDef huart2;


struct __FILE { int handle; /* Add whatever you need here */ };
FILE __stdout;
FILE __stdin;

int fputc(int ch, FILE *f)
{
	uint8_t newch = ch;
	HAL_UART_Transmit(&huart2, &newch, 1,5);
  return(ch);
}
 //


int fgetc(FILE *f)
{
	uint8_t ch;
	ch = HAL_UART_Receive(&huart2, &ch, 1, 5);
  return((int)ch);
}
 //


int ferror(FILE *f)
{
  /* Your implementation of ferror */
  return EOF;
}
 //



void _ttywrch(int ch)
{
	uint8_t newch = ch;
	HAL_UART_Transmit(&huart2, &newch, 1,5);
}
//


void _sys_exit(int return_code)
{
label:  goto label;  /* endless loop */
}
//

void exit(int return_code)
{
	
}
//
