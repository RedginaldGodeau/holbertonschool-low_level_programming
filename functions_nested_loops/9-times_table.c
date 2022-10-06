#include "main.h"

/**
* times_table - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void times_table(void)
{
	int i, i2;

	for (i = 0; i <= 9; i++)
	{
		for (i2 = 0; i2 <= 9; i2++)
		{
			int num = i * i2;
			int un = num % 10;
			int dix = dix - un;

			dix = (dix == 0 ? ' ' : dix);

			if (i2 != 0)
				_putchar('0' + dix);

			_putchar('0' + un);

			if (i2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

