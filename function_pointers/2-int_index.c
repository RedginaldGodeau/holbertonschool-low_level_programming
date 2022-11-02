#include <stdio.h>

/**
* int_index - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @array: pointer parmameter
* @size: int parmameter
* @cmp: func parameter
*/

int int_index(int *array, size_t size, int (*cmp)(int))
{
	size_t  i = 0;

	if (!array || !cmp)
		return (0);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if ((*cmp)(array[i]))
			return ((int) i);

	return (-1);
}
