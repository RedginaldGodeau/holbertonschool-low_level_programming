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
	int f = open(filename, O_RDONLY, 0),err;
	char buffer[1024];
	ssize_t i = 0;

	if (!f)
		return (0);

	err = 1;
	while (err > 0 && i < (int) letters)
	{
		err = read(f, &buffer, 1);
		if (err == -1)
			dprintf(STDERR_FILENO, "%s", buffer);
	}	i += (ssize_t) write(1, &buffer, err);
	
	close(f);
	return (i);
}
