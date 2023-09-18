#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;
	char store;

	while (s[len] != '\0')
		len++;
	end = len - 1;
	while (start < end)
	{
		store = s[start];
		s[start] = s[end];
		s[end] = store;

		start++;
		end--;
	}
}
