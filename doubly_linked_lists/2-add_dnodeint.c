#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: list parmameter
* @n: n value
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	printf("test1");

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	printf("test2");

	new->n = n;
	if (!head)
	{
		*head = new;
		return (new);
	}
	(*head)->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
