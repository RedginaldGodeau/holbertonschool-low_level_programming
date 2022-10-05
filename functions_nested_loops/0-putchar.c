#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char put[] = "_putchar";
	int i = 0;
	for ( ; put[i] != '\0'; i++)
		_putchar (put[i]);

	_putchar ('\n');
	return (0);
}
