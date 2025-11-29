#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter any integer number \n");
    scanf("%d", &n);

    printf("Printing the odd number: \n");
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d  ", i);
    }
    char str[50];
    printf("Enter your name in lowercase:\n");
    scanf("%s", &str);
    printf("Printing the first vowel charecter of your name: ");
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            printf("%c\n", str[i]);
            break;
        }
    }
    char days;
    printf("Enter the first two charecter of any days in lowercase\n");
    scanf("%c", &days);
    printf("Full name of your day: ");
    switch (days)
    {
    case 'su':
        printf("Sunday\n");
        break;
    case 'mo':
        printf("Monday\n");
        break;
    case 'tu':
        printf("Tuesday\n");
        break;
    case 'we':
        printf("Wednesday\n");
        break;
    case 'th':
        printf("Thursday\n");
        break;
    case 'fr':
        printf("Friday\n");
        break;
    case 'sa':
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input please try again \n");
        break;
    }

    return 0;
}