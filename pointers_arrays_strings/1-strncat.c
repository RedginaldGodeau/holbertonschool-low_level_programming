#include "main.h"
#include <stdlib.h>

/**
* strncat - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @dest: pointer parmameter
* @src: pointer parmameter
* @n: int parameter
*/

char * _strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	for (; dest[dest_len]; dest_len++)
		;

	for (; src_len < n && *src; src_len++)
		dest[dest_len++] = *src++;

	return ( dest );
}
