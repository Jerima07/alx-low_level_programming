#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -function to create array
 * @size: size of array
 * @c: character element
 * Return: a pointer to array, or null
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
