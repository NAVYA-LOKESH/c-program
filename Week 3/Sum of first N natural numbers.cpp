/*program to find sum of first N natural numbers*/
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter any Natural number:");
	scanf("%d",&n);
	printf("Sum of first %d Natural numbers is ",n);
	int i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
