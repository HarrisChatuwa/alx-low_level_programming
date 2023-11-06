#include <stdio.h>

/**
 * main - systems entry point
 * @argc: number of arguments
 * @argv: array og argc arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
