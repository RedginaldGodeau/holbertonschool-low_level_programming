#include "main.h"
#include <stdlib.h>

/**
* _strncpy - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @dest: pointer parmameter
* @src: pointer parmameter
* @n: int parameter
*/

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	for (; src_len < n && *src; src_len++)
		dest[dest_len++] = *src++;

	return ( dest );
}
