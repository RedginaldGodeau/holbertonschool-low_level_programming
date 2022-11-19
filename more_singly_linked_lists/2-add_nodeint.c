#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
* @n: string parmameter
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int len = 0;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	new->next = malloc(sizeof(listint_t));
	if (!new->next)
		return (NULL);

	new->next = (*head);
	(*head) = new;

	return (new);
}
