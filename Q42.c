#include<stdio.h>

void fun(int *ptr){
     printf("Value of a using pointer=%d\n",*ptr);
     *ptr +=10;
}
int main(){
     int a=5;
     printf("Value of a before funtion call=%d\n",a);
     fun(&a);
     printf("Value of a after function call=%d\n",a);
     return 0;
}