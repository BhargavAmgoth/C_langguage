/***********************************************************/ /*************************************************************

	Write a c progrsam to print the storage details and locations 

*************************************************************/ /***************************************************************/

#include<stdio.h>
struct bhargav
{
//	char a;
//	int b;
	int c[5];
	char d;
	float f[3];
	double z;
	char  e[10];
//	char j;
//	int g[10];
} a1,a2;

void main()
{
	printf("The size of a member is : %ld\n", sizeof(a1));
}

