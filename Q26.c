#include<stdio.h>
#include<string.h>

int main(){
      char str1[50] , str2[50];
      printf("Enter string1: \n");
      // using scanf
      scanf("%s", &str1);
      printf("String1: %s\n", str1);

     
      printf("Enter string2: \n");
      // using gets
      gets(str2);
      printf("String2: %s\n", str2);

      

      return 0;
}