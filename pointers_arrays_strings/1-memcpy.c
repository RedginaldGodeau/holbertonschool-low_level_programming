#include "main.h"

/**
* _memset - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @dest: pointer parmameter
* @src: pointer parmameter
* @n: unsigned int parameter
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;
	unsigned  int i = 0;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
