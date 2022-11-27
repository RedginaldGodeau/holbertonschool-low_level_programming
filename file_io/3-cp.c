/**
* print_err_str - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @err: file parmameter
* @str: text in file parameter
* @value: str parameter
*/

#include "main.h"

int print_err_str(int err, char *str, const char *value)
{
	dprintf(STDERR_FILENO, str, value);
	return (err);
}

/**
* print_err_int - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @err: file parmameter
* @str: text in file parameter
* @value: str parameter
*/

int print_err_int(int err, char *str, int value)
{
	dprintf(STDERR_FILENO, str, value);
	return (err);
}

/**
* main - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @argv: files parmameter
* @argc: int parameter
*/

int main(int argc, char *argv[])
{
	int fc, fp, status;
	char buffer[1024];

	if (argc == 2)
		return (print_err_str(97, "Usage: cp file_from file_to\n", NULL));

	if (!argv[1])
		return (print_err_str(98, "Error: Can't read from file %s\n", argv[1]));

	fc = open(argv[1], O_RDONLY);
	if (fc == -1)
		return (print_err_str(98, "Error: Can't read from file %s\n", argv[1]));

	fp = open(argv[2], O_WRONLY | O_TRUNC);
	if (fp == -1)
		fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fp == -1)
		return (print_err_str(99, "Error: Can't write to %s\n", argv[2]));

	status = 1;
	while (status != 0)
	{
		status = read(fc, &buffer, 1024);
		if (status == -1)
			return (print_err_str(98, "Error: Can't read from file %s\n", argv[1]));
		if (write(fp, &buffer, status) == -1)
			return (print_err_str(99, "Error: Can't write to %s\n", argv[2]));
	}

	status = close(fc);
	if (status == -1)
		return (print_err_int(100, "Error: Can't close fd %d", status));
	status = close(fp);
	if (status == -1)
		return (print_err_int(100, "Error: Can't close fd %d", status));

	return (0);
}
