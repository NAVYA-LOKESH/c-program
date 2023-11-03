/*Program to perform all Arthematic operations*/
#include<stdio.h> 
int main()
{
    int x,y,a,b,c,d;
    printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	printf("Sum of given two numbers is %d \n",a);
	printf("Difference of given two numbers is %d \n",b);
	printf("Product of given two numbers is %d \n",c);
	printf("Divided result of given two numbers is %d \n",d);
	return 0;
}
