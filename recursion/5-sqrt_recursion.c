#include <stdio.h>

/**
* _sqrt_recursion - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
* square - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @low: int parmameter
* @high: int parameter
* @n: int parameter
*/


int square(int low, int high, int n)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if ((mid * mid) && (mid + 1) * (mid + 1) > n)
			return mid;
		else if (mid * mid < n)
			return (square(low, mid - 1, n));
	}
	return (low);
}

int _sqrt_recursion(int n)
{
	return (square(0,n,n));
}
