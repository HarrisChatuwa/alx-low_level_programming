#include <stdio.h>

/**
 * main - systems entry point
 * @argc: number of arguments
 * @argv: array og argc arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
