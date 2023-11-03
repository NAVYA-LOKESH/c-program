/*Program to print only even numbers*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Even numbers from 1 to %d are",n);
	int i=1;
	while(i<=n)
	{
		if(i%2==0)
		printf("%d",i);
		else printf(" ");
		i++;
	}
	return 0;
}
