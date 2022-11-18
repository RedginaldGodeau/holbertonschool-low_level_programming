
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "lists.h"

/**
* free_list - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: struct parmameter
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;

		if (tmp->str)
			free(tmp->str);

		free(tmp);
	}

	free(head);
	free(tmp);
}
