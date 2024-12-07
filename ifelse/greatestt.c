#include<stdio.h>
int main()
{
	int a,b,c;
	printf("The the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("a is greatest");
	}
	if(b>a && b>c)
	{
		printf("b is greatest");
	}
	else{
		printf("C is greatest");
	}
	return 0;
}
