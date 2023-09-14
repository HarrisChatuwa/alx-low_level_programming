#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++) /* loop 10 times */
    {
        for (j = 0; j <= 14; j++) /* loop from 0 to 14 */
        {
            if (j > 9) /* if j is a two-digit number */
            {
                _putchar((j / 10) + '0'); /* print the first digit */
            }
            _putchar((j % 10) + '0'); /* print the second digit or the single digit */
        }
        _putchar('\n'); /* print a new line */
    }
}
