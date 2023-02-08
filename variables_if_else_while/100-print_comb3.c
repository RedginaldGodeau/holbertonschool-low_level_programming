#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int i2 = 0;

	for (; i < 9; i++)
	{
		for (i2 = i + 1; i2 < 10; i2++)
		{
			putchar('0' + i);
			putchar('0' + i2);

			if (i == 8 && i2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
