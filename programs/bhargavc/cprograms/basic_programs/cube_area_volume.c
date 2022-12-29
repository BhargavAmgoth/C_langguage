#include<stdio.h>
void main()
{
	int side, Area, Volume;

	printf("Enter the values of cube side:\n");
	scanf("%d",&side);

	Area = 6 * (side * side);
	Volume = (side * side * side);

	printf("Area of cube is:%d\nVolume of cube:%d\n",Area,Volume);
}
