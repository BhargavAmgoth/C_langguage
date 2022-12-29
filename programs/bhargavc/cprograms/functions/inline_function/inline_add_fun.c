#include<stdio.h>
inline int fun();
void main()
{
	int a,b,c;
	printf("enter the values of a & b :\n");
	scanf("%d%d",&a,&b);
	c = a+b;
	c = fun();
	printf("%d\n",c);
}
int fun()
{
	int p=10, q=20, c;
	c = p *q;
	return c;
}
/*
#include <stdio.h>

// Inline function in C
inline int foo()
{
	return 2;
}

// Driver code
int main()
{

	int ret;

	// inline function call
	ret = foo();

	printf("Output is: %d\n", ret);
	return 0;
}

*/

