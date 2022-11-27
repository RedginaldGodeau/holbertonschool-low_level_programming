/**
* read_textfile - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @filename: file parmameter
* @letters: lenght parameter
*/

#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int f, i = 0;

	if (!filename)
		return (-1);
	
	f = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (!f)
		return (-1);

	for (; text_content[i] != '\0'; i++)
		write(f, &text_content[i], 1);

	close(f);
	return (1);

}
