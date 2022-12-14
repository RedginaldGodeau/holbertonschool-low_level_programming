#include <stdlib.h>
/**
* malloc_checked - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @b: int parmameter
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
		exit(98);

	ptr = malloc((long int) b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
