#include "main.h"
#include <stdlib.h>

/**
* string_toupper - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @p: pointer parmameter
*/

char *string_toupper(char *p)
{
	char *tmp = p;

	do
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= 32;
	}
	while (*p++);

	return (tmp);
}
