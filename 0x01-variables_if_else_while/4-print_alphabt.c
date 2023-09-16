#include <stdio.h>

/**
 * main - program entry point
 * Return: Alaywas 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
