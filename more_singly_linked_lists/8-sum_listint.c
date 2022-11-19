#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @head: list_t pointer parmameter
*/

int sum_listint(const listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
