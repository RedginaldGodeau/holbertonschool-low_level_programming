
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include "main.h"

/**
* list_len - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @h: list_t pointer parmameter
*/

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	if (h->next)
		return (1 + (list_len((const list_t *) h->next)));
	else
		return (1);
}
