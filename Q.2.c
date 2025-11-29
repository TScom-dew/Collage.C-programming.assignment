#include <math.h>
#include <stdio.h>
int main()
{

    // area of circle
    float r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    printf("Area of the circle= %.2f", 3.14 * r * r);

    // Area of square
    int side;
    printf("\n Entet the side of square\n");
    scanf("%d", &side);
    printf("Area of square= %d", side * side);

    // area of rectangle

    int length, bredth;
    printf("\nEnter the length and bredth of rectangle\n");
    scanf("%d %d", &length, &bredth);
    printf("Area of rectangle= %d", length * bredth);

    // area of triangle

    int a, b, c, s = 0;
    float area;
    printf("\n Enter the three sides of triangle \n");
    scanf("%d %d %d ", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf(" Area of triangle= %f", area);

    return 0;
}