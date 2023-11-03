/*printing patterns*/
#include<stdio.h>
int main()
{   
    int n,q,w,p;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(q=0;q<n;q++)
	{
	  for(p=0;p<q;p++)
	  printf(" ");
	  for(w=0;w<n;w++)
	  printf("* ");
	  printf("\n");
    }
}
