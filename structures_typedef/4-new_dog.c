#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @name: pointer parmameter
* @age: float parameter
* @owner: char parameter
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;

	if (!name || !owner)
		return (NULL);

	copy = malloc(sizeof(dog_t));
	if (!copy)
	{
		free(copy->name);
		free(copy->owner);
		free(copy);
		return (NULL);
	}

	copy->name = malloc(strlen(name));
	copy->owner = malloc(strlen(owner));

	if (!copy->name || !copy->owner)
	{
		free(copy->name);
		free(copy->owner);
		free(copy);
	}

	strcpy(copy->name, name);
	strcpy(copy->owner, owner);
	copy->age = age;

	return (copy);
}
