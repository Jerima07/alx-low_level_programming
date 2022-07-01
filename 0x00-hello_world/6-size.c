#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(l));
	printf("size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("size of a float: %lu byte(s)\n", sizeof(d));
	return (0);
}
