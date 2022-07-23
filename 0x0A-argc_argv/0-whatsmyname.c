#include <stdio.h>

/**
 * main -function to print its name
 * @argc: argument count
 * @argv: arrays in the program
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
