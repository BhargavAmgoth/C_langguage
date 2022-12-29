/**********************************/ /**************************************

	298. Write a C program to find diameter, circumference and area of circle using functions.

***************************************/ /************************************/

#include<stdio.h>
#define pai 3.14
void diameter_circle(void);
void circumference_circle(void);
void area_circle(void);
void main()
{
	int radius, diameter, circumference, area;
	
	//printf("Enter the radious of circle\n");
	//scanf("%d", &radius);

	diameter_circle();
	circumference_circle();
	area_circle();
}

void diameter_circle()
{
	int radius, diameter;

	printf("Enter the radious of circle\n");
        scanf("%d", &radius);

    	diameter = 2*radius;

	printf("The Diameter of a given circle is: %d\n", diameter);
}

void circumference_circle()
{
	int radius, circumference;
	
//	printf("Enter the radious of circle\n");
        scanf("%d", &radius);

        circumference = 2* pai * radius;

        printf("The Diameter of a given circle is: %d\n", circumference);
}

void area_circle()
{
	int radius, area;

//	printf("Enter the radious of circle\n");
        scanf("%d", &radius);

        area = pai * (radius * radius);

        printf("The Diameter of a given circle is: %d\n", area);
}


