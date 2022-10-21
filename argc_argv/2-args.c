#include <stdio.h>

/**
* main - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @argc: int parmameter
* @argv: pointer parmameter
*/

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
