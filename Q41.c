#include<stdio.h>

int main(){
     char str[50];
     printf("Enter a string: ");
     scanf("%s", &str);
     size_t length = 0;
     //simple way to calculate length of string
     // while (str[length] != '\0'){
     //      length++;
     // }

     // using pointer to calculate length
     char *ptr = str;//pointing to first character of string
     while (*ptr != '\0'){
          length++;
          ptr++;
     }
     printf("Length of the string is: %zu\n", length);
     return 0;
}