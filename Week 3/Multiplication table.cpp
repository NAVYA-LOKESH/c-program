/*program to print multiplication table of a number*/
#include<stdio.h>
int main()
{
	int n,a=1;
	printf("Enter any Natural number:");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		a=n*i;
		printf("%d * %d = %d",n,i,a);
		printf("\n");
		i++;
	}
	return 0;
}
