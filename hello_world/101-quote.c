#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long unsigned int i = 0;
	for(; i < sizeof(sentence); i++) {
		putchar(sentence[i]);
	}
	return (1);
}
