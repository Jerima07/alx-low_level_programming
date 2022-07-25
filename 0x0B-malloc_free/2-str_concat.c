#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen -length of a string
 * @s: input character
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * str_concat -concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *c, *t;

	if (!s1)
		s1 = "";
	else
		l1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		l2 = _strlen(s2);

	c = malloc(l1 + l2 + 1);
	if (!c)
		return (0);

	t = c;
	while (*s1)
		*t++ = *s1++;

	while ((*t++ = *s2++))
		;

	return (c);
}
