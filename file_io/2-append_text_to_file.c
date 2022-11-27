/**
* append_text_to_file - Entry point...
* Description: 'the program desc'
* Return: Always 0 (Success)
* @filename: file parmameter
* @text_content: text in file parameter
*/

#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int f, i = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_RDWR | O_APPEND);
	if (!f)
		return (-1);

	if (text_content)
		for (; text_content[i] != '\0'; i++)
			write(f, &text_content[i], 1);

	close(f);
	return (1);

}
