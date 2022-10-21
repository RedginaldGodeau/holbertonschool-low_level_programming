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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
