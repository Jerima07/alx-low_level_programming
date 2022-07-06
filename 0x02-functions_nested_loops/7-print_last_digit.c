#include "main.h"

/**
 * print_last_digit -function to print last digit
 * @n: argument of the function
 * Return: 0
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
	{
		n = -n;
		j = n % 10;
		if (j < 0)
		{
			j = -j;
		}
		_putchar(j + '0');
		return (j);
	}
}
