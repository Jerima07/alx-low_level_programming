#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -function to search for integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer for comparing
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
