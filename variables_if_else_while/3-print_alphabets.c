#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char list = 'a';

	for (; list <= 'z'; list++)
		putchar(list);

	for (list = 'A'; list <= 'Z'; list++)
		putchar(list);

	putchar('\n');
	return (0);
}
