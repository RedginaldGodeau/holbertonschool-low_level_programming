#include "main.h"

/**
* puts2 - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @str: pointer
*/

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
}
