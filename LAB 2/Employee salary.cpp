/*Program to calculate the salary of an employee*/
#include<stdio.h>
int main()
{
	int a,b,c,s,z;
	printf("Enter the basic salary the employee in rupees:");
	scanf("%d",&s);
	a=(16*s)/100;
	printf("HRA amount of the employee is: %d rupees\n",a);
	b=(45*s)/100;
	printf("DA amount of the employee is: %d rupees \n",b);
	c=(8*s)/100;
	printf("TA amount of the employee is: %d rupees\n",c);
	z=s+a+b+c;
	printf("Total salary of the employee is %d rupees",z);
	return 0;
}
