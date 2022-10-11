#include "main.h"

/**
* print_rev - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	int len = i;

	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
