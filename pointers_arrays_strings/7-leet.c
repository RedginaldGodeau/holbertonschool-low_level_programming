#include "main.h"

/**
* leet - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer
*/

char *leet(char *s)
{
	char *l = "aeotl";
	char *t = "43071";
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		int i2 = 0;

		for (; l[i2] != '\0'; i2++)
			if (s[i] == l[i2] || s[i] == l[i2] - 32)
				s[i] = t[i2];
	}


	return (s);
}
