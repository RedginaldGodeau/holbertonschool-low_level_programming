#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @h: list parmameter
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; len++)
		h = h->next;

	return (len);
}
