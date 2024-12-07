#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The given no is even ");
	}
	if(n%2!=0)
	{
		printf("The given no is odd");
	}
	return 0;
}
