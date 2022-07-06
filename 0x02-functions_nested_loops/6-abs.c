#include "main.h"

/**
 * _abs -function to find the absolute value of a number
 * @c: argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
