/*printing patterns*/
#include<stdio.h>
int main()
{
int i,j,n,s;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
	  for(s=0;s<i;s++)
	   printf(" ");
	  for(j=0;j<n-i;j++)
	   printf("*");
	   printf("\n");
	}
	return 0;
}
