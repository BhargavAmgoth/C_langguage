#include<stdio.h>
void main()
{
	float radious, dia, area, circumfrance;

	printf("Enter the radious of the circle\n");
	scanf("%f",&radious);
	dia = (2 * radious);
	area = ((22.0/7.0) * (radious * radious));
	circumfrance = (2 * (22.0/7.0) * radious);

	printf("Diameter:%f\nArea:%f\nCirumfrance:%f\n", dia, area, circumfrance);
}
