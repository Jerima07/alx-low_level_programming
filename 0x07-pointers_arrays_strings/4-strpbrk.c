#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -funtion to serach a string for a byte
 * @s: pointer to string
 * @accept: pointer tochar
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
