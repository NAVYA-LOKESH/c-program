/*Program to find factorial of a number*/
#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("Enter any natural number:");
	scanf("%d",&n);
	printf("Factorial of the number %d is ",n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
