#include<stdio.h>

      void fabbonacci(int n, int f1, int f2, int f3){
            if(n<=0){
                  return;
            }
            printf("%d\t", f3 = f1 + f2);
            fabbonacci(n-1, f2, f3,0);
            
      }

int main(){
      int n ;
      printf("Enter any natural number: \n");
      scanf("%d", &n);
      fabbonacci(n, -1,1,0);

      // using loop
      // int f1 = -1, f2 = 1, f3;
      // for (int i = 0; i < n;i++){
      //       printf("%d  ", f3 = f1 + f2);
      //       f1 = f2;
      //       f2 = f3;
      // }

            return 0;
}