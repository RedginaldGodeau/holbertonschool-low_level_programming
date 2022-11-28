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
	ssize_t length = 0, rd = -1;
	char buffer[1024];

	if (f == -1)
		return (0);

	while (rd != 0 && length < letters)
	{
		rd = read(f, &buffer, letters);
		if (rd == -1)
		{
			close(f);
			return (length);
		}
		length += write(STDOUT_FILENO, &buffer, rd);
	}

	close(f);
	return (length);
}
