#include "main.h"
#include <stdlib.h>

/**
* _strpbrk - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
* @accept: pointer parmameter
*/

char *_strpbrk(char *s, char *accept)
{
	char str[1024];
	char *ptr;
	int i, i2;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (i2 = 0; accept[i2] != '\0'; i2++)
			if (s[i] == accept[i2])
				str[l++] = s[i];
	str[l + 1] = '\0';
	ptr = str;

	return (ptr);
}
