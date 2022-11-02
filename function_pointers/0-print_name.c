#include <stdio.h>

/**
* print_name - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @name: pointer parmameter
* @f: func parmameter
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
