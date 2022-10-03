#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char inverse = 'z';

	for( ; inverse >= 'a'; inverse--)
		putchar(inverse);

	return (0);
}
