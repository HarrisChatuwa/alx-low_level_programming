#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters in a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (islower(*ptr))
			*ptr = toupper(*ptr);
		ptr++;
	}

	return (str);
}
