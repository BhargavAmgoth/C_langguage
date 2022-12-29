#include<stdio.h>
void main()
{
	int a, b, c, d, e;

	printf("Give the values for a,b, c, d, e variables:\n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (a == b && b == c && c == d && d == e)
	{
		printf("All the given values are equal\n");
	}
	else if (a>b && a>c && a>d && a>e)
	{
		printf("%d is the biggest amoung all\n",a);
	}
	else if (b>c && b>d && b>e)
	{
		printf("%d is the biggest amoung all \n",b);
	}
	else if (c>d && c>e)
	{
		printf("%d is the biggest amoung all\n",c);
	}
	else if (d>e)
	{
		printf("%d is the biggest amoung all\n",d);
	}
	else 
	{
		printf("%d is the biggest amoung all\n",e);
	}
}
