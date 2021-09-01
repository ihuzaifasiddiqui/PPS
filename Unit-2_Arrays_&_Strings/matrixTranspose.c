#include <stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("\nENTER VALUES FOR MATRIX :\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
            
            
   for (int i =0;i<2;i++){
        for (int j=0; j<2 ;j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
     printf("The transposed matrix is\n");   
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
        printf("%5d", b[i][j]);
            
        }
        printf("\n");
    }
  
  

   
}

