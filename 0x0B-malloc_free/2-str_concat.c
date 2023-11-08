#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s = malloc(2 * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
