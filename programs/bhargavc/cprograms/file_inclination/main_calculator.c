#include<stdio.h>
#include "cal.h"
void main()
{
	int a, b;

	printf("Enter any two values\n");

	scanf("%d%d", &a, &b);

	printf("The addition of the two number %d\n", add(a, b));
	printf("The difference of the two number %d\n", diff(a, b));
	printf("The multiplication of the two number %d\n", mul(a, b));

#define c 100
}

