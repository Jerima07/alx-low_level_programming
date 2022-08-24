#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file -function that appends txt at end of file
 * @filename: name of file
 * @text_content: txt to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, res, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		res = write(f, text_content, len);
		if (res == -1)
		{
			close(f);
			write(STDOUT_FILENO, "fail", 5);
			return (-1);
		}
	}
	close(f);
	return (1);
}
