#include "main.h"
#include <stdio.h>

/**
* print_triangle - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @size: int parmameter
*/

void print_triangle(int size)
{
	int i = 1;

	for (; i <= size; i++)
	{
		int i2 = 0;

		for (; i2 < size - i; i2++)
			_putchar(' ');
		for (; i2 < i + (size - i); i2++)
			_putchar('#');
		if(i != size) _putchar('\n');
	}
	_putchar('\n');
}
