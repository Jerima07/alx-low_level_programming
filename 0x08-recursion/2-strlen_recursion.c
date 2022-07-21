#include "main.h"

/**
 * _strlen_recursion -function to print string length
 * @s: pointer
 * Return: recursion function
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
