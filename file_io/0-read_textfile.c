/**
* read_textfile - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @filename: file parmameter
* @letters: lenght parameter
*/

#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = open(filename, O_RDONLY, 0);
	char buffer;
	ssize_t i = 0;

	if (!f)
		return (0);

	if (letters > 1024)
		printf("[stderr]:\n");

	while (read(f, &buffer, 1) > 0 && i < (int) letters)
		i += (ssize_t) write(1, &buffer, 1);
	
	close(f);
	return (i);
}
