#include "main.h"

/**
 * print_times_table - prints the n times
 * table, starting with 0
 * @n: where the times table should end
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result < 10)
				_putchar(result + '0');
			else if (result > 99)
			{
				_putchar((result / 100) + '0');
				_putchar(((result % 100) / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j < n && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
			}
			else if (j < n && result > 9)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
