#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: list parmameter
* @index: int parameter
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (!head)
		return (0);

	for (; i < (int) index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}

	return (head);
}
