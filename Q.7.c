#include <stdio.h>

int main()
{

    printf("Even numbers: \n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n Odd numbers: \n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}