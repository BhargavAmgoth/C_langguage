#include<stdio.h>
void main ()
{
	int a, b, c, d;

	printf("Enter a, b, c, d values:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a == b && b == c && c == d)
	{
		printf("All the given numbers are Equal");
	}
	else if (a>b && a>c && a>d)
	{
		printf("%d is the biggest number amoung all\n",a);
	}
	else if (b>c && b>d)
	{
		printf("%d is the biggest number amgoung all\n",b);
	}
	else if (c>d)
	{
		printf("%d is the biggest number amoung all\n",c);
	}
	else
	{
		printf("%d is the biggest number amoung all\n",d);
	}
}

