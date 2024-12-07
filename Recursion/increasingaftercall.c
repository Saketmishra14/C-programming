#include<stdio.h>
void hellow(int n);
int main()
{
    int n;
    printf("Enter the  value of n");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
int increasing(int n)
{
    if (n==0) return;
  increasing(n-1);
   printf("%d\n",n);
   return;
}
/*In recursion we can write a code before as 
well as after the call to a function.*/