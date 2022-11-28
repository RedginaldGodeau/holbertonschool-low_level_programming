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
	int f = open(filename, O_RDONLY), rd = -1;
	size_t length = 0;
	char buffer[1024];

	if (f == -1)
		return (0);

	while (rd != 0 && length < letters)
	{
		rd = read(f, &buffer, 1);
		if (rd == -1)
		{
			close(f);
			return ((ssize_t) length);
		}
		length += write(STDOUT_FILENO, &buffer, rd);
	}

	close(f);
	return ((ssize_t) length);
}
