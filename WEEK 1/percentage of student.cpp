/*calculating the percentage of a student*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("ENTER THE MARKS IN FIRST SUBJECT OUT OF 100:");
scanf("%d",&a);
printf("ENTER THE MARKS IN SECOND SUBJECT OUT OF 100:");
scanf("%d",&b);
printf("ENTER THE MARKS IN THIRD SUBJECT OUT OF 100:");
scanf("%d",&c);
printf("ENTER MARKS IN FOURTH SUBJECT OUT OF 100:");
scanf("%d",&d);
printf("ENTER MARKS IN FIFTH SUBJECT OUT OF 100:");
scanf("%d",&e);
f=a+b+c+d+e;
g=f/5;
printf("percentage of the student is %d%%",g);
return 0;
}
