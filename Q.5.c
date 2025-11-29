#include <stdio.h>

int main()
{
    int n = 0;
    float sum = 0;
    printf("Enter the number of numbers: \n");
    scanf("%d", &n);
    float num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number:\n");
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    printf("The average of set of numbers=%f\n", sum / n);

    return 0;
}