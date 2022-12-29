#include<stdio.h>
void main()
{
	int a=10, b=10;
        int *p=&b;
        a = ++a + ++a + ++a;

        b= ++(*p) + ++(*p) + ++(*p);

	printf("a is%d\n", ++a + ++a + ++a);

        printf("a is %d\n,b is%d\n",a,b);
}
