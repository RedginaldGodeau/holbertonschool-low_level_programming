#include "main.h"
#include <stdio.h>

/**
* print_diagonal - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

void print_diagonal(int n)
{
	int i = 0;

	for (; i < n; i++)
    	{
		int i2 = 0;

		for (; i2 < i; i2++)
		_putchar(' ');
		_putchar('\\');
		if(i != n-1) _putchar('\n');
	}
	_putchar('\n');
}
