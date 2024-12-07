#include<stdio.h>
int main()
{
    void swap( int* x,int* y);
    int a=3,b=9;
    swap(&a,&b);
    printf("value of a is %d\n",a);
    printf("value of b is %d",b);
    return 0;
}
void swap( int* x,int* y){
    int temp;
    temp=*x;// temp=3
    *x=*y;// a=9
    *y=temp;//*y=3 --> b=3
    return;
}
//pass by reference is the passing of address of variable.