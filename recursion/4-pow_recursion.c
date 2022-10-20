#include <stdio.h>

/**
* _pow_recursion - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @x: int parmameter
* @y: int parmameter
*/

int _pow_recursion(int x, int y)
{
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	return (1);
}
