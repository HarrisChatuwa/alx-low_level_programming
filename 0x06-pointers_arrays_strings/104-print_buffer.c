#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer
 * @b: parameter
 * @size: parameter 2
 *
 * Return: a couple things
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j] & 0xFF);
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}

		for (j = i; j < i + 10; j++)
		{
			if (j < size && b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else if (j < size)
				printf(".");
			else
				break;
		}

		printf("\n");
	}
}
