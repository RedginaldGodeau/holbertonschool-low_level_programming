#include "main.h"

/**
* print_last_digit - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

int print_last_digit(int n)
{
	return ('0' + (n % 10 < 0 ? n % 10 * -1 : n % 10));
}

