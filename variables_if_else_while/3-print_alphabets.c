#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char list = 'a';	
	for ( ; list < 'z' + 1; list++)
		putchar (list);
	for (list = 'A' ; list < 'Z' + 1; list++)
                putchar (list);
	putchar ('\n');

	return (0);
}
