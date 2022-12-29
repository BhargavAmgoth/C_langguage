#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter the a, b, c values:\n");
	scanf("%d%d%d", &a, &b, &c );

	if (a > b)
	{
		if (a > c)
		{
			printf("a is max\n");
		}
		else 
		{
			printf("c is max\n");
		}
	}
	else 
	{
		if (b > c)
		{
			printf("b is max\n");
		}
		else
		{
			printf("c is max\n");
		}
	}
}
