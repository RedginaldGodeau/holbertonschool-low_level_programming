#include "main.h"

/**
* puts_half - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @str: pointer parmameter
*/

void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;
	i = (i % 2 != 0 ? i / 2 + 1 : i / 2);

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
