#include "main.h"

/**
 * _strlen -function to return the length of a string
 * @s: string element
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
