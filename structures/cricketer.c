#include<stdio.h>
#include<string.h>
int main()
{
   typedef struct cricketer{
        char name[15];
        float average;
        int age;
        int noOfMatches;
    }cricketer;
    cricketer arr[3];
    for (int  i = 0; i < 3; i++)
    {
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%d",&arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
    printf("Name:%s\n",arr[i].name);
    printf("Age:%d\n",arr[i].age);
    printf("No of matches:%d\n",arr[i].noOfMatches);
    printf("Average:%f\n\n",arr[i].average);
    }
    return 0;
}