#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "lists.h"

/**
* add_node - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
* @str: string parmameter
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

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

	new->next = malloc(sizeof(list_t));
	if (!new->next)
		return (NULL);

	new->next = (*head);
	(*head) = new;

	return (new);
}
