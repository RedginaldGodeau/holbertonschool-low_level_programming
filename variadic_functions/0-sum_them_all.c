#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: n parmameter
* @...: args parmameter
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i = 0;
	int calc = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < (int) n; i++)
		calc += va_arg(args, int);

	va_end(args);

	return (calc);
}
