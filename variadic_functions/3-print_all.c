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
	short int b = 0;

	va_start(args, format);
	while (format[i] != '\0' && format != NULL)
	{
		if (b == 1)
			sep = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%s%c",  sep, (char) va_arg(args, int));
				b = 1;
				break;
			case 'i':
				printf("%s%d", sep, (int) va_arg(args, int));
				b = 1;
				break;
			case 'f':
				printf("%s%f", sep, (float) va_arg(args, double));
				b = 1;
				break;
			case 's':
			{
				char *p = va_arg(args, char *);

				p = p != NULL ? p : strdup("(nil)");
				printf("%s%s", sep, p);
				b = 1;
				break;
			}
		}

		i++;
	}
	va_end(args);
	printf("\n");
}
