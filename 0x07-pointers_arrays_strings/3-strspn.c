#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to search
 * @accept: pointer to the characters to accept
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		int i = 0;

		found = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
			i++;
		}

		if (found == 0)
			break;

		count++;
		s++;
	}

	return (count);
}
