#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if it fits within size_r, or 0 if not.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, len_sum = 0, carry = 0;

    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    if (len1 > size_r || len2 > size_r)
        return 0;

    len1--;
    len2--;

    if (len1 >= size_r - 1 || len2 >= size_r - 1)
        return 0;

    len_sum = (len1 > len2) ? len1 + 1 : len2 + 1;

    r[len_sum] = '\0';

    while (len1 >= 0 || len2 >= 0 || carry)
    {
        int digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
        int digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        carry = sum / 10;
        sum %= 10;

        r[len_sum - 1] = sum + '0';
        len1--;
        len2--;
        len_sum--;
    }

    if (len_sum >= size_r)
        return 0;

    return r;
}
