#include<stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    
    switch (n%2)
    {
    case 0:
       printf("even no");
        break;
    
    case 1:
    printf("odd");
        break;
    }
}