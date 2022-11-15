#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "main.h"

/**
* parse_int - print all parms.
* @n: int parmameter
* @r: int parameter
* @mul: int parameter
*/
void parse_int(int n, int r, int mul)
{
	int f = n;

	if (f > 9)
	{
		f = (n / mul) % 10;

		r -= f * mul;
		mul *= 10;

		if (r > 1)
			parse_int(n, r, mul);
	}
	_putchar('0' + f);
}

/**
* print_list - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @h: list_t pointer parmameter
*/

size_t print_list(const list_t *h)
{
	const char *nullify = "(nil)";
	int i = 0;

	if (!h)
		return (0);

	if (h->str)
		for (; h->str[i] != '\0'; i++)
			;

	_putchar('[');
	parse_int(i, i, 10);
	_putchar(']');
	_putchar(' ');

	i = 0;

	if (h->str)
		while (h->str[i] != '\0')
			_putchar(h->str[i++]);
	else
		while (nullify[i] != '\0')
			_putchar(nullify[i++]);
	_putchar('\n');

	if (h->next)
		return (1 + (print_list((const list_t *) h->next)));
	else
		return (1);
}
