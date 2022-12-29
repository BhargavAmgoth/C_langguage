/************************************************/ /**************************************************

	74. Write a C program to enter any number and print all factors of the number.

*************************************************/ /*************************************************/

/*

#include<stdio.h>
void main()
{
	int num, count = 1;

	printf("Enter the any number\n");
	scanf("%d", &num);

	while (count <= num/2)
	{
		if (num % count == 0)
		{
			printf("%d\n", count);
		}

		count++;
	}
	printf("%d\n", num);
}

*/

#include<stdio.h>
void main ()
{
	int num, a, b;

	printf("Enter any number \n");
	scanf("%d", &num);
	a = 1;
	//b = 1;
	while (a <= num/2) 
	{
		b = 1;
		while (b <= num)
		{
			if (a * b == num)
			{	
				printf("%d\n", a);
			}
			
			b++;
		}

		a++;
	}
}

