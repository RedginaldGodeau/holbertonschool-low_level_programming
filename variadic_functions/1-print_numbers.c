#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @separator: separtor char
* @n: n parmameter
* @...: args parmameter
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);

	for (; i < (int) n; i++)
		if (i > 0)
			printf("%s%d", separator, va_arg(args, int));
		else
			printf("%d", va_arg(args, int));
	printf("\n");

	va_end(args);
}
