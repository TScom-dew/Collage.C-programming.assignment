#include <stdio.h>

int main()
{

    float c = 0, intof = 0, f = 0, intoc = 0;
    // program for converting value from celcious to fahrenheit
    printf("Enter the temprature in celcious:\n");
    scanf("%f", &c);
    intof = c * (9 / 5) + 32;
    printf(" Temprature in fahrenheit= %.2f degree", intof);

    // program for converting value from  fahrenheit to celcious
    printf("Enter the temprature in fahrenheit:\n");
    scanf("%f", &f);
    intoc = (5.0 / 9.0) * (f - 32);
    printf(" Temprature in celcious= %.2f degree ", intoc);

    return 0;

}
