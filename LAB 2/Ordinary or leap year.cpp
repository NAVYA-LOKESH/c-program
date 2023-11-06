/*program to find whether it is a leap year or not*/
#include<stdio.h>
int main()
{
  int a;
  printf("Enter a year:");
  scanf("%d",&a);
  if (a%4!=0)
  printf("Given year is not a leap year");
  else if (a%100==0)
        {
        	if (a%400==0)
        	printf("The given year is a leap year");
        	else printf("The given year is an ordinary year");
		}
  else printf("The given year is a leap year");
  return 0;
}
