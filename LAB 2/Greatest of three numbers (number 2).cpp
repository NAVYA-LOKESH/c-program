/*Program to find the greatest of 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter an three point values:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	printf("%d",a);
	else if(b>=a && b>=c)
	printf("%d",b);
	else printf("%d",c);
	return 0;
}