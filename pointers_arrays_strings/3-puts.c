#include "main.h"

/**
* _puts - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @str: pointer
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
}
