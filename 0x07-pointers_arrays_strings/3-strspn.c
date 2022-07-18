#include "main.h"

/**
 * _strspn -function to get length of  PREFIX substring
 * @s: main string
 * @accept: substring
 * Return: length of occurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *p = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = p;
	}
	return (c);
}
