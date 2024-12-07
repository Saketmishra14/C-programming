#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main()
{
    int a;
    printf("Enter first number");
    scanf("%d",&a);
     int b;
    printf("Enter second number");
    scanf("%d",&b);
    int sum = add(a,b);
    printf(" The sum of no is: %d",sum);
    return 0;
}
//add(a,b)=pass by value
//these are knwon as arguments (int a,int b)
//library functions are inbuild functions