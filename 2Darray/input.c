#include<stdio.h>
int main()
{
    int arr[4][4],i,j,k;
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf("Enter the elements of [%d, %d]",i,j);
        scanf("%d",&arr[i][j]);
      }
      printf("\n");
      }
     
      for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++)
      {
        printf("%d ",arr[i][j]);

      } 
       printf("\n");
    }
       return 0;
    }
    
