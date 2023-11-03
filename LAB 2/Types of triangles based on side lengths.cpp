/*Program to check the type of triangle it is*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the lengths of first,second and third sides of the triangle:");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && a==c)
	printf("Equilateral triangle");
	else if(a!=b && b!=c && c!=a)
	printf("Scalene triangle");
	else printf("Isosceles triangle");
	return 0;
	
}
