/*prinitng patterns*/
#include<stdio.h>
int main()
{
	float n;
	int i,j,s;
	printf("Enter the value of n:");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{ 
	  for(s=0;s<n-i-1;s++)
	   printf(" ");
	  for(j=0;j<i+1;j++)
	   printf("*");
	   printf("\n");
	}
	return 0;
}
