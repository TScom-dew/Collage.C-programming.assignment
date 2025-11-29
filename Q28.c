#include <stdio.h>

      int factorial(int n){
            if(n==0){
                  return 1;
            }
            int nm1 = factorial(n - 1);
            int factn = n * nm1;
            return factn;
      }
int main(){
      int n;
      printf("Enter an integer number:\n");
      scanf("%d", &n);
     
      printf("Factorial of %d= %d", n, factorial(n));

      return 0;
}