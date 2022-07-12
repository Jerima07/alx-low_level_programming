#include "main.h"

/**
 * reset_to_98 - pointer function
 * @n: pointer variable
 * Return: always 0
 */
void reset_to_98(int *n)
{
	int p;

	*n = 98;
	p = &n;
	_putchar(p);
	return (0);
}
