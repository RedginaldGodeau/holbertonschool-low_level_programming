#include "main.h"
#include <stdlib.h>

/**
* _strcat - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @dest: pointer parmameter
* @src: pointer parmameter
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	for (; dest[dest_len]; dest_len++)
		;

	for (; src[src_len]; src_len++)
		;

	while (*src)
		dest[dest_len++] = *src++;

	return ( dest );
}
