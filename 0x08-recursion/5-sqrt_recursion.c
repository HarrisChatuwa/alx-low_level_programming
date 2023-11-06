#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root
 * using recursion
 * @n: The number to find the square root of
 * @x: The current guess for the square root
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (sqrt_helper(n, x + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * using recursion
 * @n: The number to find the square root of
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
