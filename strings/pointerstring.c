#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Ayush Shukla";
    // char* ptr=str;
    // ptr="Shukla Ayush";//points another string.
    // puts(str);
    char* p=str;
    *p ='P';
    printf("%s",str);
    return 0;
}