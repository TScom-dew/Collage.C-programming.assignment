#include <stdio.h>

int main()
{

    // pattern 1
    printf("Pattern-01:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
    }

    // pattern -02
    printf("Pattern -02\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j < i; j--)
        {
            printf("* ");
        }
    }

    // pattern -03

    for (int i = 0; i < 5; i++)
    {
        for (int sp = 0; sp <= i; sp++)
        {
            printf(" ");
        }
        for (int j = 5; j < i; j--)
        {
            printf("* ");
        }
    }
}