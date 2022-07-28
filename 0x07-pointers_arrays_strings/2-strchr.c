#include "main.h"

/**
 * _strchr -function to print location of strng character
 * @s: pointer
 * @c: string characte
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
