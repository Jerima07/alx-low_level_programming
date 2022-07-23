#include <stdio.h>

/**
 * main -function to print all arguments
 * @argc: number of argument passed
 * @argv: array of the program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
