#include "main.h"

/**
 * print_alphabet_x10 -function to print alphabets 10 times in lowecase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0, i <= 9; i++)
	{
		for (j = 'a'; j <= 'z', j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
