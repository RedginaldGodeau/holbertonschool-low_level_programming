#include <stdlib.h>
/**
* array_range - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @min: int parmameter
* @max: int parameter
*/

void *array_range(int min, int max)
{
	char *ptr;
	int i = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min));

	if (ptr == NULL)
		return (NULL);

	for (; i < max; i++)
		ptr[i - min] = i;

	return (ptr);
}
