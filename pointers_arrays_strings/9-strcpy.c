#include "main.h"

/**
* _strcpy - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @dest: pointer parmameter
* @src: pointer parmameter
*/

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;

	return (tmp);
}
