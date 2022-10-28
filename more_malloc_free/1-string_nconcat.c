#include <stdlib.h>
/**
* string_nconcat - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @n: int parmameter
* @s1: pointer parameter
* @s2: pointer parameter
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len1, len2;
	int i = 0;

	for (len1 = 0; s1 == NULL && s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2 == NULL && s2[len2] != '\0'; len2++)
		;

	ptr = malloc(n + len1);
	if (ptr == NULL)
		return (NULL);

	for (; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < len2 && i < n; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + n] = '\0';

	return (ptr);
}
