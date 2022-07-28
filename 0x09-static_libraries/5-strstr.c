#include "main.h"

/**
 * _strstr -function to that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *f = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (r);
		}
		needle = f;
		r++;
		haystack = r;
	}
	return (0);
}
