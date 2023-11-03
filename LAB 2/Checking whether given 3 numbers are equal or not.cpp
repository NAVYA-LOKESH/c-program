/*Program to check whether three numbers are equal or not*/
#include<stdio.h>
int main()
{
	float a,c,b;
	printf("Enter any three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && a==c)
	{
		printf("Numbers are equal");
	}
	else{
		if(a==b || b==c || a==c)
		printf("Two numbers are equal and the number is %f",a);
		else 
		printf("The three numbers are different");
	    }
	return 0;
}
