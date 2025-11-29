#include <stdio.h>

int main()
{ // there is the addition of two 2D matrices

    
      int  matrix1[2][2] = {{2, 4}, {(3, 6)}}  ,matrix2[2][2] = {{2, 4}, {3, 6}}, matrix3[2][2];
      

      for (int i = 0; i < 2; i++)
      {
          for (int j = 0; j < 2; j++)
          {
              matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
          }
      }
      printf("Displaying the resultant matrix: \n");
      for (int i = 0; i < 2; i++)
      {
          for (int j = 0; j < 2; j++)
          {
              printf("%d ", matrix3[i][j]);
          }
          printf("\n");
      }
  
    return 0;
}