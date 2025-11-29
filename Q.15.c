#include <math.h>
#include <stdio.h>

int main()
{
    int n, sum = 0, r, count = 0;
    printf("Enter any integer number\n");
    scanf("%d", &n);
    int originalNumber = n;
    int t = n;
    while (n > 0)
    {
        r = n % 10;
        count++;
    }
    while (t != 0)
    {
        r = t % 10;
        sum += pow(r, count);
    }

    if (originalNumber == sum)
    {
        printf("Entered number is armstrong: %d\n", originalNumber);
    }
    else
    {
        printf("Number is not armstrong \n");
    }

    return 0;
}