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
	printf("Address of 'p' : %p\n", &p);
	printf("Value of 'n' : %p\n", &n);
	return (0);
}
