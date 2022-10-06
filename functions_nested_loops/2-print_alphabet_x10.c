#include "main.h"

/**
* print_alphabet_x10 - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
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
