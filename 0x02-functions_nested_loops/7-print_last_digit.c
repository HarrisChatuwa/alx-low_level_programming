#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: the number to be printed
 * Return: value of last digit
 */
int  print_last_digit(int n)
{
	int num;

	num = n % 10;
	if (num < 0)
	{
		_putchar(-num + '0');
		return (-num);
	}
	else
	{
		_putchar(num + '0');
		return (num);
	}
}
