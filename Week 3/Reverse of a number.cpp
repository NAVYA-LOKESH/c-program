/*program to get reverse of a number*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Revese of the number is ");
	while(n!=0)
	{
		printf("%d",n%10);
		n=n/10;
	}
}
