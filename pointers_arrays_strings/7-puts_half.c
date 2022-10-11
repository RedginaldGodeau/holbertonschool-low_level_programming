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
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
}
