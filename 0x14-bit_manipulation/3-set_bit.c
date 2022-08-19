#include "main.h"

/**
 * set_bit -set value of bit to 1 at given index
 * @n: pointer to unsigned long int
 * @index: index of bit
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
