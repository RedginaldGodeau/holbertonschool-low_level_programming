#include "main.h"

/**
* _memset - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
* @b: char parmameter
* @n: unsigned int parameter
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;
	unsigned  int i = 0;

	for (; i < n; i++)
		*s++ = b;

	return (tmp);
}
