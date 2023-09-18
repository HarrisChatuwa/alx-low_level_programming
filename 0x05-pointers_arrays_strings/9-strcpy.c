#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the null byte, to
 * the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *og_dest = dest;

	while (*src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return og_dest;
}
