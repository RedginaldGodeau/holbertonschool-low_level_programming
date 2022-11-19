#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
* @n: string parmameter
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	next = malloc(sizeof(listint_t));
	if (!next)
		return (NULL);

	next = (*head);
	while (next->next != NULL)
		next = next->next;

	next->next = malloc(sizeof(listint_t));
	next->next = new;

	return (new);
}
