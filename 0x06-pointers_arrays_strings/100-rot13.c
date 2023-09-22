#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr)
	{
		int i = 0;

		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			char *alpha_set = (*ptr >= 'a' && *ptr <= 'z') ? alpha_lower : alpha_upper;
			char *rot13_set = (*ptr >= 'a' && *ptr <= 'z') ? rot13_lower : rot13_upper;

			while (alpha_set[i])
			{
				if (*ptr == alpha_set[i])
				{
					*ptr = rot13_set[i];
					break;
				}
				i++;
			}
		}
		ptr++;
	}

	return (str);
}
