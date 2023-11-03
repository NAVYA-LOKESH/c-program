/*program to show both int and floating point representations(product of two numbers)*/
#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter first number:");
scanf("%f",&a);
printf("Enter second number:");
scanf("%f",&b);
c=a*b;
printf("Product of two numbers is  %f \n",c );
int d;
d=a*b;
printf("integer representation of two numbers is %d",d);
return 0;
}
