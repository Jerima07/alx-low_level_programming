#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print all possible combination of single digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
