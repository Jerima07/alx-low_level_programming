#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print all single digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
