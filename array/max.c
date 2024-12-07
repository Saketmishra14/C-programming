#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7]={2,5,6,23,43,21,12};
     int max=-1;
    // int max=arr[0]; 
    //int max= INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("%d ",max);
    return 0;
}
// It is the lowest value stored