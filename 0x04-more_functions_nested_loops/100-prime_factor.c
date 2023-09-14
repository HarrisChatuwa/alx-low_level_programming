#include <stdio.h>
#include <math.h>

/**
 * find_largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 * Description: get the largest prime factor of a number
 *
 * Return: the largest prime factor of n
 */
long find_largest_prime_factor(long n);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime;

	largest_prime = find_largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}

/**
 * find_largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 * Description: finds the largest prima factor of a number
 *
 * Return: the largest prime factor of n
 */
long find_largest_prime_factor(long n)
{
	long largest_prime = -1;
	long i;

	/* Divide n by 2 until it's no longer even */
	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}

	/* Check for other prime factors */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}

	/* If n is a prime greater than 2 */
	if (n > 2)
		largest_prime = n;

	return (largest_prime);
}
