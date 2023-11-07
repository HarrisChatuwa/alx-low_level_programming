#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: size of memory to print
 * @c: char used to initialize
 * Return: NULL if size 0 else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(c));

	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}
	else
	{
		return (NULL);
	}
	return (s);
}
