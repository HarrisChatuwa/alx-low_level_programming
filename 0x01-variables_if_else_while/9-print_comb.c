#include <stdio.h>

 /**
  * main - program entry point
  *
  * Description: Prints all possible combinations of single-digit numbers.
  * Numbers are separated by a comma and a space, and they are printed in
  * ascending order.
  * Return: Always 0 (sucess)
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
