#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* print_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @d: struct parmameter
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %d\n", dog->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
