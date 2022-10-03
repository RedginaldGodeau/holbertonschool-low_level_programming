#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = '0';
	
	for ( ; n <= '9'; n++)
	{
		putchar(n);

		if (n != '0' && n != '9')
		{
			putchar(',');
		}

		putchar(',');
	}

	return (0);
}
