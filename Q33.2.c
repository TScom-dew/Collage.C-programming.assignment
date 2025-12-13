#include<stdio.h>

int nestedfunction();

int outerfunction(){
    /*
     int nestedfunction(){
          printf("This is inner function.\n");
          return 0;
     }
          */

     printf("This is outer funtion.\n");
     // nestedfunction();
     return 0;
}
int main(){

     outerfunction();
     // nestedfunction();
     return 0;
}

