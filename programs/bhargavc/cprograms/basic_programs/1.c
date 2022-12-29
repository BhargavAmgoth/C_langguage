#include<stdio.h>
#define n 100
#define A 2
void main()
{
	int a=A;
	while(a<n)
	{
		printf("%d\n",a);
		a*=a;
	}
}
