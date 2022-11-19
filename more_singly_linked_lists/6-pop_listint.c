#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* pop_listint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: list parmameter
*/

int pop_listint (listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head)
		return (0);

	n = (*head)->n;
	tmp = *head;

	*head = tmp->next;
	free(tmp);
	return (n);
}
