#include <stdlib.h>
#include <stdio.h>

/**
* create_array- Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @size: int parmameter
* @c: char parmameter
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);
	int i = 0;

	if (size < 1)
		return (NULL);

	for (; i < size; i++)
		ptr[i] = c;


	return (ptr);
}
