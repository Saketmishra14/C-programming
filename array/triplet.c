#include<stdio.h>
int main()
{
 int n, arr[8]={1,2,3,4,5,6,7,8};
    printf("Enter the value of n:");
    scanf("%d",&n);
    int totaltriplet=0;
    for (int i = 0; i < 8; i++)
    {
    for (int j = i+1; j <=7; j++){
        for (int k = j+1 ; k < 8; k++)
        {
      
        if (arr[i]+arr[j]+arr[k]==n)
        {
            totaltriplet++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }  
    }
    }
    }
    printf(" The toatl pairs are: %d",totaltriplet);
    return 0;
}
   