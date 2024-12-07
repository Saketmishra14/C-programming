#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int Month;
        int year;
    }date;
    date a,b;
    a.day=5;
    a.Month=4;
    a.year=2004;

    b.day=2;
    b.Month=5;
    b.year=2023;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.Month!=b.Month) flag=false;
    if(a.year!=b.year) flag=false;

    if (flag==true) printf("The dates are same");
    else printf("The dates are different");
    return 0;
}
/* In used defined structure we can't compare the 
whole structure.*/