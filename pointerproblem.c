#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=8;
    //int* a=&x,b=&y;//it means int*a and int b;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}
/*We can use typedef to declare two pointer 
variable like other data type(int x,y but not int
* x,y).*/