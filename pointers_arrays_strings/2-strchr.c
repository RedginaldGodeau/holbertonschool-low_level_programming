#include "main.h"
#include <stddef.h>
/**
* _strchr - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @s: pointer parmameter
* @c: char parmameter
*/

char *_strchr(char *s, char c)
{

	int i,pos = -1;
	char tmp[99];
	char *ptr = tmp;

	for(; s[i] != '\0'; i++)
		if(s[i] == c)
		{
			pos = i;
			break;
		}
	if(pos == -1)
		return (NULL);
	
	i = 0;
	while (s[pos] != '\0)
		tmp[i++] = s[pos++];
	tmp[i] = '\0';

	return (ptr);
}
