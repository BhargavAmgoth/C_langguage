#include<stdio.h>
void main()
{
        int Angle_1, Angle_2, Angle_3;

        printf("Enter the 3 sides of a triangle:\n");
        scanf("%d%d%d", &Angle_1, &Angle_2, &Angle_3);

        if ((Angle_1 == 60) && (Angle_2 == 60) && (Angle_3 == 60))
        {
                printf("Given triangle is an Equilateral Triangle\n");
        }
        else
        {
                printf("Given triangle Angles are not for Equilateral Triangle\n");
        }
}                                 
