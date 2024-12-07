#include<stdio.h>
void hellow(int n);
int main()
{
    int n;
    printf("Enter the  value of n");
    scanf("%d",&n);
     decreasing(n);
    return 0;
}
int decreasing(int n)
{
    if (n==0) return;
   printf("%d\n",n);
  return decreasing(n-1);
}