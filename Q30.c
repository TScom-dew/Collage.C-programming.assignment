#include<stdio.h>

int main(){
      int a, b;
      printf("Enter two integer numbers:\n");
      scanf("%d %d", &a, &b);
      printf("original number\n a= %d, b= %d\n", a, b);

      // using third variable
      int t;
      t = a;
      a = b;
      b = t;
      printf("On swaping number using third variable\n a= %d, b= %d\n", a, b); 


      // without using third variable
      int p, q;
      printf("Enter two integer numbers:\n");
      scanf("%d %d", &p, &q);
      printf("original number\n p= %d, q= %d\n", p, q);
      
      p = p + q;
      q = p - q;
      p = p - q;
      printf("On swaping number without using third variable\n p= %d, q= %d\n", p, q);

      return 0;
}