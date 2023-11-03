/*Program to convert days into years*/
#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter the no of days:");
	scanf("%f",&a);
	b=a/365;
	printf("The entered numbber of days is equivallent to %f years",b);
	return 0;
}
