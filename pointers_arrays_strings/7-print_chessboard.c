#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_chessboard - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @a: pointer parmameter
*/

void print_chessboard(char (*a)[8])
{
	int i, i2;

	for (i = 0; i < (int) sizeof(a); i++)
	{
		for (i2 = 0; i2 < (int) sizeof(a); i2++)
			printf("%c", a[i][i2]);
		printf("\n");
	}
}
