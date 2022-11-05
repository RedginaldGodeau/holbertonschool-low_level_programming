#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* print_all - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @format: format parmameter
* @...: args parmameter
*/

void print_all(const char *format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0;

	if (!format)
		return;

	va_start(args, strlen(format));
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c\n",  sep, (char) va_arg(args, char));
				break;
			case 'i':
				printf("%s%d\n", sep, (int) va_arg(args, int));
				break;
			case 'f':
				printf("%s%f\n", sep, (float) va_arg(args, float));
				break;
			case 's':
				printf("%s%s\n", sep, (char *) va_arg(args, char *));
				break;
		}

		if (i == 0)
			sep = ", ";

		i++;
	}
	va_end(args);
}
