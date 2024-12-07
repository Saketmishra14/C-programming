#include<stdio.h>
int main()
{
    int arr[4][2]={{34,55},{23,65},{22,66},{76,78}};
   for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j <2; j++)
    {
      printf("%d  ",arr[i][j]);
    }
    printf("\n");
  }
  return 0; 
}