#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Enter cost price");
	scanf("%d",&cp);
	printf("Enter selling price");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("profit occured");
	}
	if(cp>sp)
	{
		printf("loss occured");
	}
	else
	{
		printf("No profit no loss");
	}
	return 0;
}
