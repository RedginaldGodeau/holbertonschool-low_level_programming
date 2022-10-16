#include "main.h"

/**
* _strchr - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
* @c: char parmameter
*/

char *_strchr(char *s, char c)
{
	char tmp[99];
	char *ptr = tmp;
	short int after = 0;
	int i = 0;

	do
	{
		if (!after && *s == c)
                        after = 1;
		else if (after)
			tmp[i++] = *s;
		
	} while (*s++);
	


	return (ptr);
}
