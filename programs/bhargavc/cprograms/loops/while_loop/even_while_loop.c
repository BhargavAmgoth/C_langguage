

/************/ /**************		
		 54. Write a C program to print all even numbers between 1 to 100. - using while loop                 
											     ***************/ /**************/

#include<stdio.h>
void main()
{
	int num1, end;

	printf("Enter any numbers\n");
	scanf("%d%d", &num1, &end);
	
	while (num1 <= end)
	{
		if (num1 % 2 == 0)
		{
			printf("%d\n", num1);
	
		}
		num1++;
	}
}
