/*program to find length of a number*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("Length of the given number is ");
	i=0;
    while(n!=0)
    {
    	n=n/10;
    	i++;
	}
	printf("%d",i);
} 
