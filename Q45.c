#include<stdio.h>

int main(){
     FILE *fptr;
     fptr = fopen("INPUT.txt", "w");
     if(fptr == NULL){
          printf("Error opening file!\n");
          return 1;
     }
     // entering data to INPUT file
     char str[100];
     printf("Enter a string to write to the file: ");
     // scanf("%s", &str);
     gets(str);
     fprintf(fptr, "%s", str);

     fclose(fptr);

     FILE *fnewptr=fopen("INPUT.txt", "r");
     if(fptr == NULL){
          printf("Error opening file!\n");
          return 1;
     }
     printf("Displaying Data after reading INPUT file:\n");
     char read_str[100];
     char ch;
     // fscanf(fnewptr, "%s", &read_str);
     // printf("After reading INPUT file: %s\n", read_str);
    
          // while (fgets(read_str,sizeof(read_str),fnewptr))
          // {
          //      printf("%s", read_str);
          // }
          ch = fgetc(fnewptr);
          while (ch != EOF)
          {
               printf("%c", ch);
               ch = fgetc(fnewptr);
          }
     
     
     fclose(fnewptr);

     return 0;
}