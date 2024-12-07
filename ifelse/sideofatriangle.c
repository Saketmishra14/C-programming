#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("This can be a side of a triangle");
	}
	else
	{
		printf("This can not be the side of a triangle");
	}
	return 0;
}
