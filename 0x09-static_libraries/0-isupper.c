#include "main.h"

/**
 * _isupper -check for upper case
 * @c: int variable
 * Return: 1 for upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}