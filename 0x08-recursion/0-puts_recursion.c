#include "main.h"

/**
 * _puts_recursion -function that prints a string followed by new line
 * @s: pointer
 * Return: No return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
