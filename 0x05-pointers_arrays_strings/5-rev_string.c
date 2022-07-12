#include "main.h"

/**
 * rev_string -function to reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, max, mid;
	char f, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	mid = max / 2;
	while (mid >= 0)
	{
		f = s[max - mid];
		l = s[mid];
		s[mid] = f;
		s[max - mid] = l;
		mid--;
	}
}
