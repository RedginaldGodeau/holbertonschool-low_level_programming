#include <stdlib.h>

/**
* init_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @d: struct parmameter
* @name: pointer parmameter
* @age: float parameter
* @owner: pointer parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
