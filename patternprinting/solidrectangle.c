# include<stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++) //outer loop-->nowof rows(lines)
    {
     for (int i = 1; i <=5; i++) //inner loop--> no of colums(stars in each lines)
     {
    printf("*");
     }
     printf("\n");
    }
    return 0;
}