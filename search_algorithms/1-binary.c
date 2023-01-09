#include "search_algos.h"
/**
 * b_search - recursive search...
 * Description: 'search value in array'
 * Return: Int
 * @array: pointer array
 * @left: size array
 * @right: value of search
 * @search: value of search
 */
int b_search(int *array, size_t left, size_t right, int search)
{
	size_t middle, i;

	if (right >= left)
	{
		middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i + 1 > right)
				printf("\n");
			else
				printf(", ");

		}

		if (array[middle] == search)
			return (middle);

		if (array[middle] > search)
			return (b_search(array, left, middle - 1, search));

		return (b_search(array, middle + 1, right, search));
	}

	return (-1);
}

/**
 * binary_search - search item in array...
 * Description: 'search value in array'
 * Return: Int
 * @array: pointer array
 * @size: size array
 * @value: value of search
 */
int binary_search(int *array, size_t size, int value)
{
	return (b_search(array, 0, size - 1, value));
	printf("\n");
}
