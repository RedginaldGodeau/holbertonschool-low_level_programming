#include <stdlib.h>
/**
* _calloc - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @nmemb: int parmameter
* @size: int parameter
*/

char *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0;

	if (nmemb * sizeof(size) == 0)
		return (NULL);

	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);

	for (; i < (int) (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
