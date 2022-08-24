#include "main.h"
#include <string.h>

/**
 * read_textfile -read txt file and print it to stdout
 * @filename: name of file
 * @letters: number of letters to print
 * Return: always 0 as success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t frd, fwr;
	char *out;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	out = malloc(sizeof(char) * (letters));

	if (!out)
		return (0);

	frd = read(x, out, letters);
	if (frd == -1)
		return (0);
	fwr = write(STDOUT_FILENO, out, frd);

	free(out);
	close(x);

	return (fwr);
}
