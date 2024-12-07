#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	if(n>99 && n<1000)
	{
		printf("This is three digit number");
	}
	else{
		printf("This is not a three digit number");
	}
}
