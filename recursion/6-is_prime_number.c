#include <stdio.h>

/**
* is_prime_number - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
*/

/**
* prime - func p...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
* @i: int parameter
*/

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (i > n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	if (i == 2)
		return (prime(n, i + 1));
	return (prime(n, i + 2));
}

int is_prime_number(int n)
{
	return (prime(n, 2));
}
