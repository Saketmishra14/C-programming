#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int max=INT_MIN;
    int smax=INT_MIN;
    // for (int i = 0; i < 7; i++)
    //     {
    //         if (max<arr[i])
    //         {
    //             max=arr[i];
    //         } 
    //     }
    // {
    //     for (int i = 0; i < 7; i++)
    //     {
        
    //     if (arr[i]!=max && smax<arr[i])
    //     {
    //         smax=arr[i];
    //     }
    //     }   
  //  }
  for (int i = 0; i < 7; i++)
  {
    if (max<arr[i])
    {
      smax=max;//smax is now previous max
      max=arr[i];
    }
    else if (smax<arr[i]&& max!==arr[i])
    {
        smax=arr[i];
    } 
    
  }
  
    printf("%d",smax);
}
//This  code is valid for any sequence of value (increasing,decreasing or no pattern)