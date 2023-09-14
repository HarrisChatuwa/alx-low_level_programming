#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        int fizz = i % 3 == 0;
        int buzz = i % 5 == 0;

        if (fizz)
            printf("Fizz");

        if (buzz)
            printf("Buzz");

        if (!fizz && !buzz)
            printf("%d", i);

        if (i < 100)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}
