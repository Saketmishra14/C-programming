#include <stdio.h>
int main()

{
	float Hin,eng,maths,chem,physics,tot,per;
	Hin=50;
	eng=50;
	maths=50;
	chem=50;
	physics=50;
	tot=Hin+eng+maths+chem+physics;
	per=(tot/500)*100;
	printf("Percentage: %f",per);
	return 0;
}
