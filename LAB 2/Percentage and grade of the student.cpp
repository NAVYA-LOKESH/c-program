/*Program to calculate percentage and grade of the student*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Marks in Physics:");
	scanf("%d",&a);
	printf("Marks in Chemistry:");
	scanf("%d",&b);
	printf("Marks in Biology:");
	scanf("%d",&c);
	printf("Marks in Mathematics:");
	scanf("%d",&d);
	printf("Marks in Computer:");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("Percentage of the student is: %d%% \n",f);
	if (f>=90)
	printf("Grade A");
	else if(f>=80)
	printf("Grade B");
	else if(f>=70)
	printf("Grade C");
	else if(f>=60)
	printf("Grade D");
	else if(f>=40)
	printf("Grade E");
	else printf("Grade F");
	return 0;
}
