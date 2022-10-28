#include <stdlib.h>
/**
* malloc_checked - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @b: int parmameter
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
