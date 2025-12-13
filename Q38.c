#include<stdio.h>
int main(){
     int a;
     printf("Enter an integer value:\n");
     scanf("%d", &a);
     int  *ptr=&a;
     printf("Accessing value using pointer: %d\n", *ptr);
     return 0;
}