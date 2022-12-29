/********************************/ /**********************************************

	 Write a program to illustate the use of indirection operator '*' to access the value pointed to by a pointer.

***********************************/ /*******************************************/

#include<stdio.h>
void main()
{
	int x = 5, y;

	printf("The address of x is %p\n", &x);
	printf("The value of x using *&x %d\n", *&x);

	int *ptr;
	
	ptr = &x;

	printf("The address of x and value of wild pointer ptr %p\n", ptr);
	
	printf("The value of x using *ptr %d\n", *ptr);
	
	printf("\nThe address of wild pointer variable &ptr %p\n", &ptr);

        printf("The address of x value of wild pointer &*ptr %p\n\n", &*ptr);
	
	printf("The address of x value of wild pointer *&ptr %p\n\n", *&ptr);
	
	printf("The address of x value of wild pointer *&(ptr) %p\n\n", *&(ptr));
	
	printf("The address of x value of wild pointer *(&ptr) %p\n\n", *(&ptr));
}

