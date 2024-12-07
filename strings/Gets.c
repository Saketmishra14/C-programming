#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter the string");
   // scanf("%s",str);//only first word consider
    gets(str);//entire sentence will be consider.
   // scanf("%[^\n]s",str); //for whole sentence
    printf("Your input was: %s",str);
    return 0;
}
/*Can't declare string without size if input 
of elements taken.
so take extra size of string. */
//put automatically take \n.