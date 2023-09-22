#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result, or 0 if it cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l, m, i, j, k, len1, len2, sum, carry, digit;
	char temp;

	/* find the lengths of n1 and n2 */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	/* initialize the indices and the carry */
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	carry = 0;

	/* loop from right to left until one of the numbers is exhausted */
	while (i >= 0 && j >= 0)
	{
		/* convert the chars to ints and add them with the carry */
		sum = (n1[i] - '0') + (n2[j] - '0') + carry;
		/* get the last digit of the sum and convert it to char */
		digit = sum % 10;
		r[k] = digit + '0';
		/* update the carry */
		carry = sum / 10;
		/* decrement the indices and increment the buffer index */
		i--;
		j--;
		k++;
	}

	/* loop until n1 is exhausted */
	while (i >= 0)
	{
		/* add the remaining digit of n1 with the carry */
		sum = (n1[i] - '0') + carry;
		/* get the last digit of the sum and convert it to char */
		digit = sum % 10;
		r[k] = digit + '0';
		/* update the carry */
		carry = sum / 10;
		/* decrement i and increment k */
		i--;
		k++;
	}

	/* loop until n2 is exhausted */
	while (j >= 0)
	{
		/* add the remaining digit of n2 with the carry */
		sum = (n2[j] - '0') + carry;
		/* get the last digit of the sum and convert it to char */
		digit = sum % 10;
		r[k] = digit + '0';
		/* update the carry */
		carry = sum / 10;
		/* decrement j and increment k */
		j--;
		k++;
	}

	/* if there is still a carry, add it to the buffer */
	if (carry > 0)
	{
		r[k] = carry + '0';
		k++;
	}

	/* if the buffer size is not enough, return 0 */
	if (k >= size_r)
	{
		return (0);
	}

	/* add a null terminator to the buffer */
	r[k] = '\0';

	/* reverse the buffer in place using another loop */
	for (l = 0, m = k - 1; l < m; l++, m--)
	{
		temp = r[l];
		r[l] = r[m];
		r[m] = temp;
	}

	/* return a pointer to the buffer */
	return (r);
}
