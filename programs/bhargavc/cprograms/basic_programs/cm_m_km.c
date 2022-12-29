#include<stdio.h>
void main()
{
	float centimeter, meter, km;
	printf("Enter centimeters:\n");
	scanf("%f",&centimeter);
	meter = centimeter/100.0;
	km = centimeter/100000.0;
	printf("Meter:%f\nKilloMeter:%f\n",meter,km);
}
