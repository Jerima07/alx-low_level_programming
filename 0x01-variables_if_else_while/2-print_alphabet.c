#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing lower alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
