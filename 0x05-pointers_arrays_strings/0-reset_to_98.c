#include "main.h"

/**
 * main - pointer function
 * Return: always 0
 */
int main(void)
{
	int p;
	int *n;

	p = 98;
	*n = &p;
	_putchar("Address of 'p' : %p\n", &p);
	_putchar("Value of 'n' : %p\n", &n);
	return (0);
}
