#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @h: list_t pointer parmameter
*/

size_t print_listint(const listint_t *h)
{
	int len = 0;

	for (; h; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
