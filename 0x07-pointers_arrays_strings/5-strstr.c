#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates the first occurrence of a substring in a string.
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *start_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		start_needle = needle;

		while (*start_haystack == *start_needle && *start_needle)
		{
			start_haystack++;
			start_needle++;
		}

		if (*start_needle == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
