/************************************************/ /*****************************************

34. Write a C program to find all roots of a quadratic equation.

*************************************************/ /*****************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main ()
{
	int a, b, c, d, Root1, Root2, Real, Imaginary;
	
	printf("Enter the coordinates of quadratic equation\n");
	scanf("%d%d%d", &a, &b, &c);

	if (a == 0)
	{
		printf("We can not find the roots using given coordinatrs\n");
		exit(0);
	}
	else
	{
		d = ((b*b) - (4 * a * c));

		if (d == 0)
		{
			printf("Roots are Real and Same\n");
			
			Root1 = (-b/(2*a));
			Root2 = (-b/(2*a));

			printf("Root1 : %d\n Root2 : %d\n", Root1, Root2);
		}
		else if (d > 0)
		{
			printf("Roots are Real and Differernt\n");

			Root1 = (-b + (sqrt(d)) / (2*a));
			Root1 = (-b - (sqrt(d)) / (2*a));

			printf("Root1 : %d\n Root2 : %d\n", Root1, Root2);
		}

		else if (d < 0)
		{
			printf("Roots are Real and Immaginary\n");
	
			Real = (-b / (2 * a));
			Imaginary = ( (sqrt(d)) / (2 * a));

			printf("Root1 has Real and immaginary: %d + %d\n Root2 has Real and immaginary: %d + %i\n", Real, Imaginary, Real, Imaginary);
		}
	}
}

