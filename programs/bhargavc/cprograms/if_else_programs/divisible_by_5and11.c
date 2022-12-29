#include<stdio.h>
void main()
{
	int a;
	printf("enter the values");
	scanf("%d",&a);
	if ((a/5 == 0) && (a/11 ==0))
	{
		printf("divisible by 5 and 11\n");
	}
	else
	{
		printf("not divisible by 5 and 11\n");
        }
}

