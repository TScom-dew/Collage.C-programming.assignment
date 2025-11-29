#include <stdio.h>
int main()
{
    int n, fact = 0;
    printf("Enter any integer number\n");
    scanf("%d", &n);

    while (n = !0)
    {
        int r = n % 10;
        fact *= r;
        n = n / 10;
    }
    printf("Factorial of %d : %d\n", n, fact);

    return 0;
}