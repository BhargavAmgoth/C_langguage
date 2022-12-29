/****************************************************/ /******************************************************

	Write a c program of declaration and Syntax and location printing in pointer 

*****************************************************/ /*********************************************************/

#include<stdio.h>
void main()
{
	int a = 5, *ptr = &a;

//	int *p = &ptr;

	printf("The value of a %d\n", a);

	printf("The address of a using & is: %p\n", &a);

	printf("The address of the variable a using the pointer is : %p\n", ptr);

	printf("The value of a using the * pointer is : %d\n", *ptr);
}
