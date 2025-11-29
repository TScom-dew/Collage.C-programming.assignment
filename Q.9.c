#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter three integer numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Greatest number= %d\n", a);
        }
        else
        {
            printf("Greatest number= %d\n", c);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            printf("Greatest number= %d\n", b);
        }
        else
        {
            printf("Greatest number= %d\n", c);
        }
    }
    else if (a == b && a != c)
    { // a==b
        if (a > c)
        {
            printf("Greatest number= %d\n", a);
        }
        else if (a < c)
        {
            printf("Greatest number= %d\n", c);
        }
        else if (b > c)
        {
            printf("Greatest number= %d\n", b);
        }
        else
        {
            printf("Greatest number= %d\n", c);
        }
    }
    else
    {
        printf("All are equal !\n");
    }

    return 0;
}