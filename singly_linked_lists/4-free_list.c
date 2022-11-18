
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
	list_t *nex, *save;

	if (!head)
		return;

	nex = malloc(sizeof(list_t));
	if (!nex)
		return;

	save = malloc(sizeof(list_t));
	if (!save)
		return;

	while (nex)
	{
		if (nex->str)
			free(nex->str);
		save = nex->next;
		free(nex);
		nex = save;
	}

	free(head);
	free(nex);
	free(save);
}
