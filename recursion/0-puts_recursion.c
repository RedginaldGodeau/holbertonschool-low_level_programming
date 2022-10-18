#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
*/

void _puts_recursion (char *s)
{
	putchar(*s);
	if (*s++ != '\0')
		_puts_recursion(s);
	else
		putchar('\n');
}
