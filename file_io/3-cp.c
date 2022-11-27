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
	char buffer[1024];
	
	if (argc == 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fc = open(argv[1], O_RDONLY);
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fp = open(argv[2], O_WRONLY | O_TRUNC);
	if (fp == -1)
		fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	status = 1;
	while (status != 0)
	{
		status = read(fc, &buffer, 1024);
		if (status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		if (write(fp, &buffer, status) == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			return (99);
		}
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
