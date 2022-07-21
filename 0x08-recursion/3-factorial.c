#include "main.h"

/**
 * factorial -get factorial of n
 * @n: integer parameter
 * Return: recuesion function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
