#include<stdio.h>
void main()
{
	int a;

	printf("Enter the value of a\n");
	scanf("%d",&a);

	if (a%2 != 0)
	{
		printf("Given number %d is odd number\n",a);
	}
	else 
	{
		printf("Given number %d is even number\n",a);
	}
}
