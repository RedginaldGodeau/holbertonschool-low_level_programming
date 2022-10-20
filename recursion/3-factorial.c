#include <stdio.h>

/**
* factorial - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

int factorial(int n)
{
	if (n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
