#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int count = 0;
	int i;

	while (count < 10)
	{
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}

		_putchar('\n');
		count++;
	}
}
