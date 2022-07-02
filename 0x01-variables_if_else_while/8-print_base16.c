#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print numbers in base 16
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
