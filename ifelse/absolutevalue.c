#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n<0)
	{
		n=n*(-1);
	}
	printf("The absolute no :%d",n);
	return 0;
}
