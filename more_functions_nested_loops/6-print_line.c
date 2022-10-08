#include "main.h"
#include <stdio.h>

/**
* print_line - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
