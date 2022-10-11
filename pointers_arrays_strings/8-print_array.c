#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_array - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer parameter
* @n: int parameter
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (!i)
			printf("%d",a[i]);
		else
			printf(", %d",a[i]);

	}
	_putchar('\n');
}
