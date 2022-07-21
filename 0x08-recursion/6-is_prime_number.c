#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors -get prime number
 * @n: integer param
 * @m: integer param
 * Return: boolean
 */
int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number -funtion to return integer is prim
 * @n: integer param
 * Return: recursion function
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
