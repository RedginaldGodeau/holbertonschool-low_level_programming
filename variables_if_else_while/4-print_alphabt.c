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
	{
		if (list != 'q' || list != 'e')
			putchar (list);
	}
	putchar ('\n');

	return (0);
}
