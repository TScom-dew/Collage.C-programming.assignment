#include<stdio.h>

int main(){
     char str1[50], str2[50];
     printf("Enter a string:\n");
     scanf("%s", &str1);
     //strlen()
     size_t length = strlen(str1);
     printf("Length of entered string: %d\n", length);

     // strlwr();
     strlwr(str1);
     printf("lowercase of entered string: %s\n", str1);

     // strupr();
     strupr(str1);
     printf("Upercase of entered string: %s\n", str1);

     //strrev()
     strrev(str1);
     printf("Reversed of entered string: %s", str1);

     // strcpy()
     strcpy(str2, str1);
     printf("Copied value of str1 in str2: %s\n", str2);

     //strcat()
     strcat(str1, " Kumar");
     printf("Adding ' Kumar' at the end of str1: %s\n", str1);

     //strcmp()
     int p = strcmp(str1, str2);
     if (p==0)      
     {
          printf("Both str1 and str2 are equal.\n");
     }else{
          printf("Both str1 and str2 are not equal.\n");
     }
     

     return 0;
}