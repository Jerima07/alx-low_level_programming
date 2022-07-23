#include <stdio.h>

/**
 * main -print number of argument counts
 * @argc: number of arguments
 * @argv: arrays in the program
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
