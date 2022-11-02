#include <stdio.h>

/**
* int_index - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @array: pointer parmameter
* @size: int parmameter
* @cmp: func parameter
*/

int int_index(int *array, size_t size, void (*cmp)(int))
{
	size_t  i = 0;
	int n = 0;

	if (!array || !cmp)
		return;

	for (; i < size; i++)
		if ((*cmp)(array[i]))
			n++;

	return (n);
}
