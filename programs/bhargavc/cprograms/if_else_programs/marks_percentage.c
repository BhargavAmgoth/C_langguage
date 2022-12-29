/***********************************************************************/ /*
 
  36. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

*/ /************************************************************************/

#include<stdio.h>
void main()
{
	int Physics, Chemistry, Biology, Mathematics, Computer, Total_marks;

	float Percentage;

	printf("Enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d", &Physics, &Chemistry, &Biology, &Mathematics, &Computer);

	Total_marks = (Physics + Chemistry + Biology + Mathematics + Computer);
	
	Percentage = ((Total_marks) / 5);

	if (Percentage >= 90)
	{
		printf("%.2f Pecentage with Grade_A\n", Percentage);
	}
	else if (Percentage >= 80)
	{
		printf("%.2f Percentage with Grade_B\n", Percentage);
	}
	else if (Percentage >= 70)
        {       
                printf("%.2f Pecentage with Grade_C\n", Percentage);
        }       
	else if (Percentage >= 60)
        {       
                printf("%.2f Pecentage with Grade_D\n", Percentage);
        }       
	else if (Percentage >= 50)
        {       
                printf("%.2f Pecentage with Grade_E\n", Percentage);
        }       
	else if (Percentage >= 40)
        {       
                printf("%.2f Pecentage with Grade_F\n", Percentage);
        }
	else 
	{
		printf("%.2f Percentage is Filed\n", Percentage);
	}
	
}
