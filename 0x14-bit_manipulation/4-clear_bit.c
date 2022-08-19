#include "main.h"

/**
 * clear_bit -set value of bit to 0
 * @n: pointer to unsigned long int
 * @index: index of bit
 * Return: 1 or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
