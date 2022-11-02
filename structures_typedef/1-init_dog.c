#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* init_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @owner: pointer parmameter
* @age: float parameter
* @d: pointer paramater
* @name: pointer paramater
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
