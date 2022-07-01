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

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(l));
	printf("size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("size of a float: %zu byte(s)\n", sizeof(d));
	return (0);
}
