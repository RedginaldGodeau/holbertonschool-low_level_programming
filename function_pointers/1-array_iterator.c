#include <stdio.h>

/**
* array_iterator - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @array: pointer parmameter
* @size: int parmameter
* @action: func parameter
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		(*action) (array[i]);
}
