#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @argc: int parmameter
* @argv: pointer parmameter
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int i2 = 0;
	int calc = 0;

	for (; i < argc; i++)
	{
		for (; argv[i][i2] != '\0'; i2++)
			if (isdigit(argv[i][i2] == 0))
			{
				printf("Error\n");
				return -1;
			}

	}
		calc += atoi(argv[i]);

	printf("%d\n", calc);
	return (0);
}
