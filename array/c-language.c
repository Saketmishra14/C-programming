#include<stdio.h>
int main(){
    int n;
    printf("entre the number:");
    scanf("%d",&n);
    int i;
    for(i=n;i<=10*n;i=i+n)
    printf("%d\n",i);
    return 0;
}