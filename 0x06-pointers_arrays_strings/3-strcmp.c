#include "main.h"

/**
 * _strcmp -function to compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 for string 1 and 1 for string 2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}
