#include "main.h"

/**
* rev_string - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer
*/

void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	for (; s[len] != '\0'; len++)
		;
	len--;

	for (; i <= len; i++)
	{
		int pos = len - i;
		char tmp = s[i];

		s[i] = s[pos];
		s[pos] = tmp;
	}
	s[i + 1] = '\0';
}
