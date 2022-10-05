#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10 ()
{
	char a;
	int i = 0;

	for (; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
