#include <stdio.h>
/**
* _strlen_recursion - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
*/

int _strlen_recursion(char *s)
{

	if (*s++)
		return (1 + _strlen_recursion(s));
	return (0);
}
