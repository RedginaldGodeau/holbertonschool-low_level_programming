#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
* @n: string parmameter
* @idx: string parmameter
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	int i = 0;

	if (!head || !(*head))
		return (NULL);

	for (; i < (int) idx; i++)
	{
		if (!(*head)->next)
			return (NULL);
		(*head) = (*head)->next;
	}
	tmp = (*head)->next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp;
	(*head)->next = new;

	return (new);
}
