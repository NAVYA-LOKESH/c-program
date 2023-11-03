/*Program to find greatest of three numbers*/
#include<stdio.h>
int main()
{
   float a,b,c;
   printf("Enter first number:");
   scanf("%f",&a);
   printf("Enter second number:");
   scanf("%f",&b);
   printf("Enter third number:");
   scanf("%f",&c);
   if (a>b && a>c)
   printf("%f is the greatest of all three",a);
   else if (c>b)   
   printf("%f is the greatest of all three numbers",c);
   else 
   printf("%f is the greatest of all numbers given",b);
   return 0;
    }
