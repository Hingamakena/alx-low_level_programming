#include "main.h"

/**
 * create_file - creates a file if not present
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: int descriptor
 */
int create_file(const char *filename, char *text_content)
{
	int x = 0;
	int w = 0;
	int i = 0;

	for (; text_content[i] != '\0'; i++)
		;

	x = open(filename, O_CREAT);

	w = write(x, text_content, i);

	return (w);
}
