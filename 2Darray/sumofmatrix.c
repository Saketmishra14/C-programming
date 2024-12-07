#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter no of rows ");
    scanf("%d",&r);
    printf("Enter no of columns");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
    for (int j = 0; j < c; j++)
    {
     printf("Enter the elements [%d , %d]",i,j);
     scanf("%d",&arr[i][j]);
    }
    printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
    for (int j = 0; j < c; j++)
    {
    printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    int sum=0;
    for (int i = 0; i < r; i++)
    {
    for (int j = 0; j < c; j++)
    {
    sum=sum + arr[i][j];
    }
    printf("\n"); 
}
 printf("The sum of matrix is:  %d ",sum);
    return 0; 
}