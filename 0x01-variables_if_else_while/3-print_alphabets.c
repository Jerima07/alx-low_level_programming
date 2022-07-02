#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing both lower and upper case
 * Return: always 0 (success)
 */
int main(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		putchar(alp);
	}
	for (alp = 65; alp <= 90; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
