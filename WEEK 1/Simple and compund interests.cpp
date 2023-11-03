/*Program to calculate simple and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter principle amount: \n");
	scanf("%f",&a);
	printf("Enter rate of interest: \n");
	scanf("%f",&b);
	printf("Enter the time span: \n");
	scanf("%f",&c);
	d=a*b*c/100;
	printf("Simple interest of the given data is %f \n",d);
	e=a*pow((1+b/100),c)-a;
	printf("Compound interest of the given data compounded anually is %f",e);
	return 0; 
	
}
