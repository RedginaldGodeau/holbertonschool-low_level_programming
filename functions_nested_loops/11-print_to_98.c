#include "main.h"
#include <stdio.h>

/**
* add - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: int parmameter
* @b: int parmameter
*/

void print_to_98(int n)
{
	int op = 98 - n;
	op /= op;

	int i = n;

	for (; i != 98; i += op)
	{
		printf(" ,%d", i);
	}

}
