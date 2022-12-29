/***********************************/ /********************************

	Write a c program to declare and initialize four variables and then prints out the values with their respective storage locatipons. Note that we have used %u, %p, %x as a formate to printing the address values. Memory addresses are unsigned intergers.

*************************************/ /**********************************/

#include<stdio.h>

void main()
{
	char a; 
	int x;
	float p, q;
	
	a = 'A';
	x = 125;
	p = 10.25;
	q = 18.77;

	printf("%c is stored at address using prercentage u %u.\n", a, &a);
	printf("%c is stored at address using prercentage x %x.\n", a, &a);
	printf("%c is stored at address using prercentage p %p.\n", a, &a);

        unsigned int b = 1699548635;
	printf("\n\n%u is changed into x %x and p %p\n", b, b, b);
	/*
A is stored at address using prercentage x 654d0ddb.
A is stored at address using prercentage p 0x7ffc654d0ddb.
*/
}
