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
	char *buffer;

	if (!f)
		return (0);
	
	buffer = malloc(sizeof(char) * letters + 1);
	buffer[letters + 1] = '\0';

	err = read(f, buffer, letters);
	if (err == -1)
	{
		dprintf(1, "%s", buffer);
		return (0);
	}
	
	err = 0;

	while (buffer[err] != '\0')
		err += write(1, &buffer[err], 1);
	
	close(f);
	return ((ssize_t) err);
}
