#include <stdlib.h>

/**
* free_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @d: struct parmameter
*/

void free_dog(struct dog *d)
{
	if (!d)
		return;

	free(d);
}
