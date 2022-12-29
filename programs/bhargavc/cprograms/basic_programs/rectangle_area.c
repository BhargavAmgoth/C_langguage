#include<stdio.h>
void main()
{
	int length, bredth, Area;

	printf("Enter the length and bredth:\n");
	scanf("%d %d",&length,&bredth);

	Area = length * bredth;

	printf("Area of rectangle:%d\n",Area);
}
