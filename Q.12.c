#include <stdio.h>

int main()
{
    int n = 0, count = 0;
    printf("Enter number of students:\n");
    scanf("%d", &n);
    float W[n];
    float H[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter weight of student in kg:\n");
        scanf("%f", &W[i]);
        printf("Enter height of student in cm:\n");
        scanf("%f", &H[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (W[i] < 50 && H[i] < 170)
        {
            count++;
        }
    }

    printf(" The number of students,\n whose weight and height is less than 50kg and 170cm\n respectvely = %d\n", count);

    return 0;
}