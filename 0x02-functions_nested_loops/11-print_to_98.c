#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: first number to be printed
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i );
			if (i > 98)
				printf(", ");
		}
	}

	putchar('\n');
}
