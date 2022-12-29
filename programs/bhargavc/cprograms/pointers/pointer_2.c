#include<stdio.h>
void main()
{
        int a=10,b=10;
        int *p=&b;

	printf("The %d\n", *p);
        a= a++ + a++ + ++a;
        //b= ++(*p) + (*p)++ + ++(*p);
	
	printf("*P %d\n", ++(*p));
	printf("*P %d\n", (*p)++);
	printf("*P %d\n", ++(*p));

        printf("%d,%d\n",a,b);
}
