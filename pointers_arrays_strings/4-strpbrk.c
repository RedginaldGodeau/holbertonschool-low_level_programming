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

	char *str;
	int len = 0, i = 0, i2, c = 0;

	for (; s[len] != '\0'; len++)
		;

	str = malloc(sizeof(char) * len + 1);
	
	for (; *s[i] != '\0'; i++)
		for (i2 = 0; accept[i2] != '\0'; i2++)
			if (accept[i2] == s[i])
				str[c++] = s[i];
	str[c + 1] = '\0';
	return (str);
}
