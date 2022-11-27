/**
* create_file - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @filename: file parmameter
* @text_content: text in file parameter
*/

#include "main.h"

int main(int argc, char *argv[])
{
	int fc, fp, status;
	char buffer;

	if (argc == 2)
	{
		printf("Usage: cp file_from file_to");
		return (97);
	}
	if (!argv[1])
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE");
		return (98);
	}

	fc = open(argv[1], O_RDONLY);
	if (fc == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE");
		return (98);
	}

	fp = open(argv[2], O_WRONLY | O_TRUNC);
	if (fp == -1)
		fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		return (98);
	}
	
	while (read(fc, &buffer, 1) > 0)
		if (write(fp, &buffer, 1) == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s", argv[2]);
			return (99);
		}

	status = close(fc);
	if (status == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d", status);
		return (100);
	}
	status = close(fp);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", status);
		return (100);
	}

	return (0);
}
