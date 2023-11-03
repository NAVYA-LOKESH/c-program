/*program to calculate the electricity bill*/
#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the number of units consumed:");
	scanf("%f",&a);
	if(a<50)
	{
		b=1.5*a;
		printf("Elecricity bill for the consumed units is: %f rupees",b);
	}
	else 
	{
	  if(a>=50&&a<100)
	  {
	  c=3*a;
	  printf("Electricity bill for the consumed units is: %f rupees",c);
      }
    else 
    {
      d=5*a;
      printf("Electricity bill for the consumed units is: %f rupees",d);
      return 0;
	}
    }
}


