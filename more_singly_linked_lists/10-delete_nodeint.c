#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: list parmameter
* @index: index parameter
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	listint_t *tmp;

	if (!head || !(*head))
		return (-1);

	for (; i < (int) index - 1; i++)
	{
		if (!(*head)->next)
			return (-1);
		(*head) = (*head)->next;
	}
	tmp = (*head);
	(*head)->next = (*head)->next->next;
	free(tmp);
	return (1);
}
