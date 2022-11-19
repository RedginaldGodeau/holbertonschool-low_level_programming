#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function
 * @head: nodelist
 * Return: 0
 * Description: Free all node
 */
void free_listint2(listint_t **head)
{
	listint_t *target;

	if (!head)
		return;

	target = *head;


	if (target->next)
		free_listint2(&target->next);

	free(target);
	target = NULL;
	*head = target;
}
