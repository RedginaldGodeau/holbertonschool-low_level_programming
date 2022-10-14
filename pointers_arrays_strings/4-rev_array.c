#include "main.h"
#include <stdlib.h>

/**
* reverse_array - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer parmameter
* @n: int parmameter
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++ )
	{
		int tmp = a[i]; 
		a[i] = a[n - i];
		a[n - i] = tmp;
	}

}
