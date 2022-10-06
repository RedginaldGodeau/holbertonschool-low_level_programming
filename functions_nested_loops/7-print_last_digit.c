#include "main.h"

/**
* print_last_digit - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

int print_last_digit(int n)
{
	int last = n % 10;

	last = (n < 0 ? last * -1 : last);
	
	_putchar('0' + last);
	return (last);
}

