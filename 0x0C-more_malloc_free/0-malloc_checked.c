#include "main.h"

/**
 * malloc_checked -allocate memory
 * @b: byte allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
