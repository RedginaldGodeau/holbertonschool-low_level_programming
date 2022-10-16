#include "main.h"

/**
* _strspn - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
* @accept: pointer parmameter
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number  = 0;

	do
	{
		char *tmp = *accept;
		do
		{
			if(*tmp == *s++)
				number++;

		} while (*tmp++)

	} while (*s++)
	
	return (number);
}
