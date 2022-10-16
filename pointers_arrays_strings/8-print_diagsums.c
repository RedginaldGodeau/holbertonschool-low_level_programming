#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_diagsums - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer parmameter
* @size: int parameter
*/

void print_diagsums(int *a, int size)
{
	int i,calc = 0;

	for (i = 0; i < size; i++)
		calc += a[i * size + i];
	printf("%d, ", calc);

	for (i = 0; i <= size; i++)
		calc += a[i * (size - 1)];
	printf("\n");
}
