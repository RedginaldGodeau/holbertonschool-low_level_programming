#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Entry point...
 * Description: 'the program desc'
 * Return: Always 0 (Success)
 * @str: pointer parmameter
 */

char *_strdup(char *str)
{

	if (str == NULL)
		return (NULL);

	int len = 0;
	int i = 0;

	for (; str[len] != '\0'; len++)
		;

	char *ptr = malloc(sizeof(char) * len);

	for (; str[i] != '\0'; i++)
		ptr[i] = str[i];


	return (ptr);
}
