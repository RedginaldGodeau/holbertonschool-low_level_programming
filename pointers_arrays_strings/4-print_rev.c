#include "main.h"

/**
* print_rev - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer
*/

void print_rev(char *s)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;

	while (i >= 0)
		_putchar(s[i--]);
	_purchar('\n');
}
