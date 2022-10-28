#include <stdlib.h>
/**
* malloc_checked - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @b: int parmameter
*/

void *malloc_checked(unsigned int b)
{
	*ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
