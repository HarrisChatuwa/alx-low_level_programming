#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, n, result;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			result = i * n;
			if (result > 9)
				_putchar((result / 10) + '0');
			else
				_putchar(' ');

			_putchar((result % 10) + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
