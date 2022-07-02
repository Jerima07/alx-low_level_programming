#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int o;
	long int m;
	long long int i;
	float n;
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(o));
	printf("Size of a long int: %zu byte(s)\n", sizeof(m));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(i));
	printf("Size of a float: %zu byte(s)\n", sizeof(n));
	return (0);
}
