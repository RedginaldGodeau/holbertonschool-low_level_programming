#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @separator: separtor char
* @n: n parmameter
* @...: args parmameter
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = 0;

	if (!separator)
		return;

	va_start(args, n);

	for (; i < n; i++)
		if (i > 0)
			printf("%s%s", separator, va_arg(args, char *));
		else
			printf("%s", va_arg(args, char *));


	va_end(args);
}
