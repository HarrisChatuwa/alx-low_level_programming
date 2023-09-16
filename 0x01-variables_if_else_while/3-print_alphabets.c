#include <stdio.h>

/**
 * main - program entry point
 * Return: Alaywas 0 (success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
