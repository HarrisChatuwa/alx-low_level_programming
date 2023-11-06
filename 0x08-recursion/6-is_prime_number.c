#include "main.h"

/**
 * is_prime_helper - Helper function to check if n is prime
 * @n: The number to check for primality
 * @i: The current divisor to test
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i < 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Checks if n is a prime number
 * @n: The number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
