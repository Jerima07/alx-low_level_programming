#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print single digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
