#include "main.h"
#include <stdlib.h>

/**
* cap_string - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer parmameter
*/

char *cap_string(char *a)
{
	char *list = ",.;{}()\"?!\n\t ";
	int i = 1;

	for (; a[i] != '\0' ;i++)
	{
		int i2 = 0;

		for (; list[i2] != '\0'; i2++)
			if(a[i - 1] != list[i2])
				if (a[i] >= 'a' && a[i] <= 'z')
					a[i] -= 32;
	}

	return (a);
}
