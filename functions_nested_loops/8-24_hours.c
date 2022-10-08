#include "main.h"
#include <stdio.h>

/**
* jack_bauer - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24 ; h++)
		for (m = 0; m < 60; m++)
		{
			int u = h % 10;
			int dix = (h - u) / 10;

			_putchar(dix + '0');
			_putchar(u + '0');
			_putchar(':');

			u = m % 10;
			dix = (m - u) / 10;

			_putchar(dix + '0');
			_putchar(u + '0');
			_putchar('\n');
		}
}

