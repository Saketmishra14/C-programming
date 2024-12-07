#include<stdio.h>
int main()
{
    int a=34;
    int* x=&a; //int* -> store address of int
    int**y=&x; //int**->store the address of pointer
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d",**y);
    return 0;
}
// %p used to print address while %d used to print value.