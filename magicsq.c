#include <stdio.h>
  #define N 5
  
  int main()
  {
      int a[N][N];
      int i, temp;
     int col, row;      
     i = 1;
	      for(row = 0;row <N; row++)
     {
         for(col = 0;col <N; col ++)
         {
             a[row][col] = i;
             i++;
         }
     }    
    for(row = 0; row <N/2; row ++)
     {
         for(col = N/4;col <N/4*3;col ++)
         {
             temp = a[row][col];
             a[row][col] = a[N-row-1][col];
             a[N-row-1][col] = temp;
         }
     }     
     for(col = 0; col <N/2; col ++)
     {
         for(row = N/4;row <N/4 * 3;row ++)
         {
             temp = a[row][col];
             a[row][col] = a[row][N-col-1];
             a[row][N-col-1] = temp;
         }
     }  
     for(row = 0;row <N; row++)
     {
         for(col = 0;col <N; col ++)
         {
             printf("%5d",a[row][col]);
         }
         printf("\n");
     }
     return 0;
 }
