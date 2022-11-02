#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @d: struct parmameter
* @name: pointer parmameter
* @age: float parmameter
* @owner: pointer parmameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
