#include <stdio.h>
#include <stdlib.h>

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
	int calc = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (; i < argc; i++)
		calc += atoi(argv[i]);

	printf("%d\n", calc);
	return (0);
}
