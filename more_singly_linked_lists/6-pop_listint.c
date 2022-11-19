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
	if (head && (*head))
		return (0);

	head = (*head);

	while (head)
		head = head->next;

	free(head);
	head = NULL;

	return (1);
}
