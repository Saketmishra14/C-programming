#include<stdio.h>
void hellow(int n);
int main()
{
    int n;
    printf("Enter the  value of n");
    scanf("%d",&n);
     increasing(1,n);
    return 0;
}
void increasing(int x,int n)
{
    if (x>n) return;
   printf("%d\n",x);
  return increasing(x+1,n);
    
}