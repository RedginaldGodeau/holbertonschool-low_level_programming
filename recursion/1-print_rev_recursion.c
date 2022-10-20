#include <stdio.h>
/**
* _print_rev_recursion- Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
*/

void _print_rev_recursion (char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
