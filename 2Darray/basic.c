#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter no of rows");
    scanf("%d",&r);
    printf("Enter no of columns");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
     for (int j = 0; j < c; j++)
     {
        printf("Enter no of elements[%d %d]",i,j);
        scanf("%d",&arr[r][c]);
     }
     printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
         printf("%d ",arr[r][c]);
        } 
        printf("\n"); 
    }
    return 0;
}