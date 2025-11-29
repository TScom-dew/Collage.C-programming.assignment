#include <stdio.h>

int main()
{
    float p = 0, r = 0, t = 0, si = 0, P = 0, A = 0, ci = 0;
    printf("for calculating simple interest\n ");
    printf("Enter principle value :\n");
    scanf("%f", &p);
    printf("Enter rate of interest :\n");
    scanf("%f", &r);
    printf("Enter the time :\n");
    scanf("%f", &t);
    // calculating the simple interest
    si = (p * r * t) / 100.0;
    printf("Simple interest= %f\n", si);

    printf("for calculating compound interest\n ");
    printf("Enter principle amount :\n");
    scanf("%f", &P);
    printf("Enter actual amount :\n");
    scanf("%f", &A);
    // calculating the compound interest
    ci = P - A;
    printf("Compound interest= %f\n", ci);

    return 0;
}