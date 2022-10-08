#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
	}
	_putchar('\n');
}
