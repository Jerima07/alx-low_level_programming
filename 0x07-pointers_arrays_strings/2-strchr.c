#include "main.h"

/**
 * _strchr -function to print location of strng character
 * @s: pointer
 * @c: string characte
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (char *s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
return (0);
}
