#include <stdlib.h>
#include <stdio.h>

/**
 * main -function to multiply 2 numbers
 * @argc: number of areguments
 * @argv: array passed in program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
