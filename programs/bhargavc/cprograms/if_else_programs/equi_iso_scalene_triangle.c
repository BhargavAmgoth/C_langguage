/**********
 	33. Write a C program to check whether the triangle is equilateral, isosceles or scalene
triangle.

*********/

#include<stdio.h>
void main()
{
	int  angle_1, angle_2, angle_3;

	printf("Enter all the three angles for a triangle\n");
	scanf("%d%d%d", &angle_1, &angle_2, &angle_3);
	
	if (angle_1 + angle_2 + angle_3 == 180)
	{
		if (angle_1 == 60 && angle_2 == 60 && angle_3 == 60)
		{
			printf("Given angles %d, %d, %d are for an Equilateral Triangle\n", angle_1, angle_2, angle_3);
		}
		
		else if ((angle_1 == angle_2) || (angle_2 == angle_3) || (angle_1 == angle_3))
		{
			printf("Given angles %d, %d, %d are for an Isoscales Triangle\n", angle_1, angle_2, angle_3);
                }

		else if ((angle_1 != angle_2) && (angle_1 != angle_3) && (angle_2 != angle_3))
		{
			printf("Given angles %d, %d, %d are for an Scalene Triangle\n", angle_1, angle_2, angle_3);
		}
	}

	else 
	{
		printf("Enter correct angles a triangle should have only 180 degrres of angle\n");
	}
}

