#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -generate random password
 * Return: 0
 */
int main(void)
{
	int psw[100];
	int i, sum, j;

	sum = 0;

	srand(time(Null));

	for (i = 0; i < 100; i++)
	{
		psw[i] = rand() % 78;
		sum += (psw[i] + '0');
		putchar(psw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
