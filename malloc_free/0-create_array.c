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

	if (size < 1)
		return (NULL);

	*ptr = c;


	return (ptr);
}
