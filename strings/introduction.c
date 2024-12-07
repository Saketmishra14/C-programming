#include <stdio.h>
int main()
{
    char arr[]={'h','e','l','l','o','\0'};
    // char ch='\0';//null character with 0 ascii.
    // printf("%d",ch);
    // int x=0;
    // cha a=(char)x; /// a->\0 
    // printf("%c",a);
    int i=0;
    while (arr[i]!='\0')
    {
     printf("%c ",arr[i] );
     i++;
    }
    return 0;
}
 /* null character did not print but it exist*/