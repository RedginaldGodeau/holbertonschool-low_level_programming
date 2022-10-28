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
	char *ptr;
	int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (; i < (int) size; i++)
		ptr[i] = c;


	return (ptr);
}
