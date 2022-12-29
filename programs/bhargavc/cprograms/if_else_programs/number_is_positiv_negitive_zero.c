#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter the a value:\n");
	scanf("%d", &a);

	if (a > 0)
	{
		printf("Given value is positive\n");
	}
	else if (a < 0)
	{
		printf("Given value is negitive\n");
	}
       else
       {
	      printf("Given value is zero\n");
       }
}
