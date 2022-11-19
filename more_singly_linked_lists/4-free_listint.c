#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - descrition function
 * @head: list parameter
 * Return: Alwails return void
 * Description: cool desc no ?e
 */
void free_listint(listint_t *head)
{
	listint_t *target;

	if (!head)
		return;

	target = head;


	if (target->next)
		free_listint2(&target->next);

	free(target);
	target = NULL;
	head = target;
}
