/********************/ /************
			 55. Write a C program to print all odd number between 1 to 100.  
		      					*************************/ /****************/

#include<stdio.h>
void main()
{
	int num1, end;

	printf("ENter any two numbers\n");
	scanf("%d%d", &num1, &end);

	while (num1 <= end)
	{
		if (num1 % 2 != 0)
		{
			printf("%d\n", num1);
		}
		num1++;
	}
}
