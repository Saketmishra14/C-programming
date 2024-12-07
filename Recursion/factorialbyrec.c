#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The value of factorial is:%d",fact);
    return 0;
}
int factorial(int n)
{
    if (n==1 || n==0) return 1; // base case(break condition)
    return n*factorial(n-1);
}
