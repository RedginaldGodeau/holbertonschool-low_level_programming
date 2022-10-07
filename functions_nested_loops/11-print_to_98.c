#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

void print_to_98(int n)
{
	int op = 98 - n;
	int i = n;

	op = (op < 0 ? -1 : 1);

	for (; ; i += op)
	{
		if (i != n)
			printf(", ");

		printf("%d", i);

		if (i == 98)
		{
			_putchar('\n');
			break;
		}
	}

}
