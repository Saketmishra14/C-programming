#include<stdio.h>
int main()
{
    int n, arr[8]={1,2,3,4,5,6,7,8};
    printf("Enter the value of n:");
    scanf("%d",&n);
    int totalpair=0;
    for (int i = 0; i < 8; i++)
    {
    for (int j = i+1; j <=7; j++)
    {
        if (arr[i]+arr[j]==n)
        {
            totalpair++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }  
    }
    }
    printf(" The toatl pairs are: %d",totalpair);
    return 0;
}