#include "search_algos.h"
/**
 * linear_search - search item in array...
 * Description: 'search value in array'
 * Return: Int
 * @array: pointer array
 * @size: size array
 * @value: value of search
*/

int linear_search(int *array, size_t size, int value)
{
	size_t pos = 0;

	for (; pos < size && array[pos] != value; pos++)
        printf("Value checked array[%d] = [%d]", pos, array[pos]);

	if (array[pos] != value)
		return (-1);

	return (pos);
}
