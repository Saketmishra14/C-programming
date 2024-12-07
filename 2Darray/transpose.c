j#include<stdio.h>
int main()
{
    int r;
    printf("Enter no of rows");
    scanf("%d",&r);
      int c;
    printf("Enter no of columns");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
     for (int j = 0; j < c; j++)
     {
      printf("Enter the elements of [%d,%d]",i,j);
      scanf("%d",&arr[i][j]);
     }
     printf("\n");
    }
    int brr[c][r];
      for (int i = 0; i < c; i++)
    {
     for (int j = 0; j < r; j++)
     {
    //   printf(" %d",arr[j][i]);
     brr[i][j]=arr[j][i];
     }
     printf("\n");
    }
    for (int i = 0; i < c; i++)
    {
      for (int j = 0; j < r; j++)
      {
        printf("%d ",brr[i][j]);
      }
      printf("\n");
    }
    
    return 0;
}