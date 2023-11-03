/*printing patterns*/
#include<stdio.h>
int main()
{
	int q,w,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
  	for(q=1;q<=n;q++)
	{
	  for(w=1;w<=q;w++)
	  {
	    printf("* ");
      }
      printf("\n");
    }
    for(q=n;q>=0;q--)
    {
      for(w=1;w<=q;w++)
      {
	    printf("* ");
      }
	  printf("\n");
    }
}
