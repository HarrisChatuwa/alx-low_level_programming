#include <stdio.h>

/**
  * main - program entry point
  *
  * Description: Prints numbers 0 to 9
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
