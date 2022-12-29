#include<stdio.h>
void main ()
{
	int a, b, sum, diff, multi, div, modulus;
	char ch;
	
	//printf("Enter the operation:\n");
	//getchar();
	//ch = getchar();

	printf("Enter any two values\n");
	scanf("%d%d", &a,&b);
	getchar();
	printf("Enter the operation\n");
	ch = getchar();
	switch (ch)
	{
		case '+' :
			sum = a + b;
			printf("Sum: %d\n", sum);
			break;

		case '-' :
                        diff = a - b;
                        printf("Differance: %d\n", diff);
			break;

		case '*' :
                       	multi = a * b;
                        printf("Multiplication: %d\n", multi);
			break;

		case '/' :
                        div = a / b;
                        printf("Division: %d\n", div);
			break;

		case '%' :
                        modulus = a % b;
                        printf("Modulus: %d\n", modulus);
			break;

		default :
			printf("Enter the correct arthematic operation simbol\n");
			break;
	}

}  

