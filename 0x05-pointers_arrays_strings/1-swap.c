#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: pointer to number 1
 * @b: pointer to number 2
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
