#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
		separator = strdup("");

	va_start(args, n);

	for (; i < (int) n; i++)
	{
		char *arg = va_arg(args, char *);

		if (!arg)
			arg = strdup("(nil)");

		if (i > 0)
			printf("%s%s", separator, arg);
		else
			printf("%s", arg);
	}
	printf("\n");

	va_end(args);
}
