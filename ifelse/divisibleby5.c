#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf("Number  is devisible by 5");
	}
	else{
		printf("The number is not devisible by 5");
	}
	return 0;
}
