/*program to convert kilometer to centimeter and millimeter*/
#include<stdio.h>
main()
{
	int a,x,y,z;
	printf("Enter the number of kilometers:");
	scanf("%d",&a);
	x=a*1000;
	y=a*100000;
	z=a*1000000;
	printf("The values in meters,centimeters and millimeters are %dm,%dcm and %dmm respectively",x,y,z);
	return 0;
}
