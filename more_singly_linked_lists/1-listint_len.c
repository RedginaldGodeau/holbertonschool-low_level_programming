#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @h: list_t pointer parmameter
*/

size_t listint_len(const listint_t *h)
{
	int len = 0;

	for (; h; len++)
		h = h->next;

	return (len);
}
