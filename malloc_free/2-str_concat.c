#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Entry point...
 * Description: 'the program desc'
 * Return: Always 0 (Success)
 * @s1: pointer parameter
 * @s2: pointer parameter
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int i2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (; s1[len1] != '\0'; len1++)
		;
	for (; s2[len2] != '\0'; len2++)
		;

	ptr = malloc(sizeof(char) * (len1 + len2));

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (; s2[i2] != '\0'; i++)
	{
		ptr[i] = s2[i2];
		i2++;
	}

	return (ptr);
}
