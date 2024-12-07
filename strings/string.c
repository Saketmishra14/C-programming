#include<stdio.h>
int main()
{
    char str[]="My name is Ayush Shukla\0";//string
   // str[1]=99;
    int i=0;
    while (str[i]!='\0')
    {
     printf("%c",str[i]);
     i++;
    }
    return 0;
}
/*computer automatically add null character
(\0) at end.The size of array will also include
 \0*/
 //Extra size of the can be declared.  