#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
     for (int j = 1; j <= n; j++)
     {
        if (j==i || i+j==n+1) printf("*");
        else printf("  ");
     }
     printf("\n");
    }
    return 0;
}