#include<stdio.h>

 void arrFunction(int arr[], int n){
       for (int i = 0; i < n;  i++)
       {
             printf("%d\t", arr[i]);
       }
 }

 int main(){
       int arr[] = {1, 2, 3, 4, 5};
       size_t n = sizeof(arr)/sizeof(arr[0]);
       arrFunction(arr,n);
      return 0;
 }


