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
	int len1, len2, i, i2;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	for (len1 = 0; s1 != NULL && s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2 != NULL && s2[len2] != '\0'; len2++)
		;

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i2 = 0; s2 != NULL && s2[i2] != '\0'; i2++)
		ptr[i++] = s2[i2];

	return (ptr);
}
