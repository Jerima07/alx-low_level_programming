#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print lower case alpha in reverse form
 * Return: always 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
