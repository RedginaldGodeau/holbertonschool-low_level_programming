#include "main.h"
#include <stdlib.h>

/**
* _strcmp - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s1: pointer parmameter
* @s2: pointer parmameter
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	for (; *s1++; len1++)
		;
	for (; *s2++; len2++)
		;

	return (len1 - len2) * (len1 * len2)/2;
}
