#include<stdio.h>
void input(int*roll,int*phy,int*chem,int*mat,int*Eng,int*hin);
void process(int phy,int mat,int che,int Eng,int hin,
	float *tot,float *per, char grade);
void display(int roll,float tot,float per,char grade);
int main()
{int roll, phy,chem,mat,Eng,hin;
float tot,per;
char grade;
input(&roll,&phy,&chem,&mat,&Eng,&hin);
process(phy,chem,mat,Eng,hin,&tot,&per,&grade);
display(roll,tot,per,grade);
return 0;
}

    void input(int*roll,int*phy,int*chem,int*mat,int*Eng,int*hin)

{
	printf("enter the roll number:");
	scanf("%d",roll);
	printf("enter the marks");
	scanf("%d %d %d %d %d",&phy,&chem,&mat,&Eng,&hin);
	return;
}
	void process(int phy,int mat,int che,int Eng,int hin,
	float *tot,float *per, char grade)
	{
	*tot=phy+che+mat+hin+Eng;
	*per=(*tot/500)*100;
	if(*per>=90){
	printf("grade A");	
	}
	
   else	if(*per>=80){
   	printf("grade B");
   }
	
   else if(*per>=60)
	{
		printf("grade C");
	}
  else if(*per>=45)
	{
		printf("grade f");
		return;
	}
}
	void display(int roll,float tot,float per,char grade)
{
	printf("Your roll is %d",roll);
	printf("Your total marks are %d ",tot);
	printf("your percentage is %f",per);
	printf("your grade is %c",grade);
	return;
}
	

