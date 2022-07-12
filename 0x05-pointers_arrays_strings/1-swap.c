#include "main.h"

/**
 * swap_int -function to swap 2 variables
 * @a: pointer for variable one
 * @b: pointer for variable two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
