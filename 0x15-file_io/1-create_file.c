#include "main.h"

/**
 * create_file -function that creates a file
 * @filename: pointer to file
 * @text_content: string to write to file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, n);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
