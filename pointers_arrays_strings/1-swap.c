#include "main.c"

/**
* times_table - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer
* @b: pointer
*/

void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *b + *a;
	*a = *a - *b;
}
