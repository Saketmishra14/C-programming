 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char str[]="Ayush Shukla";
    char* ptr=str;//ptr now points to str[0].
    int i=0;
    while (*ptr!='\0')
    {
     printf("%c",*ptr);
     ptr++;//for to take next address of str.
     i++;
    }
    return 0;
 }
 //ptr stand for address
 //*ptr can use to fetch the value or character. 
 /*character's pointer can also used to store
 address of a string or string.
 -->* ptr print the first word of string 
 while ptr print the full sting.
 -->by intitilisation using pointers can cause 
 undefined behaviour when we try to change the
 individual characters.
 -->In normal intialization, we can mofify indivi
 dual char not the Entire string.
 -->Pointer intilization, we can modify entire 
 string but not the individual.*/