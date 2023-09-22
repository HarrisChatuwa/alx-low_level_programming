#include "main.h"

/**
 * rot13 - encodes
 * @str: parameter
 * Return: str
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char offset = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';

		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			*ptr = ((*ptr - offset + 13) % 26) + offset;
		}

		ptr++;
	}

	return (str);
}
