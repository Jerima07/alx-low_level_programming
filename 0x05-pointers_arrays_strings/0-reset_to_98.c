#include "main.h"

/**
 * reset_to_98 -funtion to reset pointer
 * @n: pointer variable
 * Return: always 0
 */
void reset_to_98(int *n)
{
	int p;
	int *n;

	p = 98;
	n = &p;
	_putchar("Address of 'p' : %p\n", &p);
	_putchar("Value of 'n' : %p\n", &n);
	return (0);
}
