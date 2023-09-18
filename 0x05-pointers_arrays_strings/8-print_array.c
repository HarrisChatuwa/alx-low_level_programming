#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to the integer array.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
