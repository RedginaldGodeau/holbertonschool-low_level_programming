#include "main.h"
#include <stdlib.h>

/**
* _strcmp - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s1: pointer parmameter
* @s2: pointer parmameter
*/

int _strcmp(char *s1, char *s2)
{
	do
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

	} 
	while (*s1++ && *s2++);

	return (0);
}
