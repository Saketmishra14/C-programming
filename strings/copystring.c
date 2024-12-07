#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Ayush Shukla";
    // char* s2=s1; shallow copy
    // s1[0]='c';
    // puts(s2);
    char s2[]="Ayush Shukla";//deep copy 
    s2[0]='j';
    puts(s1);
    puts(s2);
    return 0;
}
