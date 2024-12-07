#include<stdio.h>
void table(int n,int count)
{
    if(count<=10) printf("%d * %d=%d\n",n,count,n*count);
    return table(n,count+1);
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
   table(n,1);
    printf("%d",n);
    return 0;
}