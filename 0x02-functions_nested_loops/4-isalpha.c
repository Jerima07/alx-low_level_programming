#include "main.h"

/**
 * _isalpha -fuction to check for alphabet character
 * @c: is the argument of the funtion
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
