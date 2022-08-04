#include "3-calc.h"

/**
 * op_add -function to add 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract function
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 integers
 * @a: first integer
 * @b: seconf integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculatate the division of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -find remainder of division of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: remeinder of b divided by a
 */
int op_mod(int a, int b)
{
	return (a % b);
}
