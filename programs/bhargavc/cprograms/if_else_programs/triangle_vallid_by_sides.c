#include<stdio.h>
void main()
{
	int Side_1,Side_2, Side_3;

	printf("Enter the 3 sides of a triangle:\n");
	scanf("%d%d%d", &Side_1, &Side_2, &Side_3);

	if (Side_1 == Side_2 && Side_2 == Side_3)
	{
		printf("Given triangle is an Equilateral Triangle\n");
	}
	else 
	{
		printf("Given triangle sides are not for Equilateral Triangle\n");
	}
}
