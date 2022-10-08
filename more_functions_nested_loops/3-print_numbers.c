#include "main.h"
#include <stdio.h>

/**
* print_numbers - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
		_putchar('0' + i);
	_putchar('\n');
}
