#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("Enter two integer numbers:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Greatest number= %d\n", a);
    }
    else if (a < b)
    {
        printf("Greatest number= %d\n", b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}