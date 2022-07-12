#include "main.h"

/**
 * reset_to_98 - pointer function
 * @n: pointer variable
 * Return: always 0
 */
void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = &p;
	putchar("Address of 'p' : %p\n", &p);
	putchar("Value of 'n' : %p\n", &n);
	return (0);
}
