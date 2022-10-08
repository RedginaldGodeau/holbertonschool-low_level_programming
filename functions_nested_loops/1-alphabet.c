#include "main.h"

/**
* print_alphabet - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char al = 'a';

	for (; al <= 'z' ; al++)
	{
		_putchar (al);
	}
	_putchar ('\n');
}
