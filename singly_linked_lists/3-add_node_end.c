#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "lists.h"

/**
* add_node_end - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
* @str: string parmameter
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *next;
	int len = 0;

	len += 1;

	if (!str)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	for (; str[len] != 0; len++)
		;

	new->str = strdup(str);
	new->len = len;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	next = malloc(sizeof(list_t));
	if (!next)
		return (NULL);

	next = (*head);
	while (next->next != NULL)
		next = next->next;

	next->next = malloc(sizeof(list_t));
	next->next = new;

	return (new);
}
