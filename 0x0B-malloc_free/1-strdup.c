#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to br allocated
 * Return: NULL if str is NULL, pointer if sucessful
 */

char *_strdup(char *str)
{
	char *c;
	int j, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	i += 1;
	c = malloc(i * sizeof(char));

	if (c == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (c);
}
