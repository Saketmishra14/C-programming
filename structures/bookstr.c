#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];
        int noofpage;
        float price;
    }a,b,c;
    strcpy(a.name,"Harry potter");
    a.noofpage=100;
    a.price=456.3;

    strcpy(b.name,"Seven Secret");
    b.noofpage=500;
    b.price=600;

    strcpy(c.name,"Geeta");
    c.noofpage=600;
    c.price=605;
    
    printf("The no of pages:%d\n",a.noofpage);
    printf("Price of book:%f\n",a.price);
    printf("Name of book:%s\n",a.name);
    return 0;
}