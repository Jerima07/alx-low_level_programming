#include <unistd.h>

/**
 * _putchar -print character elements
 * @c: the character element to print
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
