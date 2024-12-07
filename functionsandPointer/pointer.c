#include<stdio.h>
int main()
{
    int a=6;
    int* x=&a;
    *x=43;
    printf("%p \n",x);//address of a .
    printf("%p\n",&x);//address of pointer.
    printf("%d",*x);//value of a.
    return 0;
}
// int* denotes pointer.
//pointer also contain its own address.
// *x pointing the value whose address is stored.
//*x can also change the value whome it point.