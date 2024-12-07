#include<stdio.h>
void hellow(int n);
int main()
{
    int n;
    printf("Enter the  value of n");
    scanf("%d",&n);
     hellow(n);
    return 0;
}
void hellow(int n)
{
    if (n==0) return;
   printf("Hellow world\n");
  return hellow(n-1);
    
}