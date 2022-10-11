#include "main.h"

/**
* _strlen - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer
*/

int _strlen(char *s)
{
	int i = 0;

	for (; *s++ ; i++)
		;

	return (i);
}
