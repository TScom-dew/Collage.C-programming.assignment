#include <stdio.h>

int main()
{

    int a = 0, b = 0;
    printf("Enter two different integer numbers:\n");
    scanf("%d %d", &a, &b);

    // using the condition operator
    // ( condition )? true block : false block ;
    (a > b) ? printf("a is greater than b\n") : printf("b is greater than a\n");

    return 0;

}
