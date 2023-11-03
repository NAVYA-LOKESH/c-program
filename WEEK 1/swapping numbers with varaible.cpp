/*This program is to swap the numbers*/
#include<stdio.h>
int main()
{
int a,b;
printf("ENTER A NUMBER x:");
scanf("%d",&a);
printf("ENTER ANOTHER NUMNER y:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("x is %d and y is %d",a,b);
return 0;
}
