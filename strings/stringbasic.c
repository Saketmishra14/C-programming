#include<stdio.h>
int main()
{
    char arr[4]={'a','c','f','d'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);

    printf("%c\n",arr[2]);
    char ch='A';
    printf("%c\n",ch);
    char cha='9';
    int x=(int)cha;
    printf("%d",x);
    return 0;
}
/* character array takes more storage then
integer array. 1 byte of memory. */
/*ASCII values of the characters
 a=97 && char of '1'=49 and '9'=57
  z=122   && '0' =48
 A=65
 Z=90*/