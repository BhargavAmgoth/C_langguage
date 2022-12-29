#include<stdio.h>
void main()
{
	int a,b, sum, sub, multiplication,modulus;
	float division;

	printf("Enter the valuesof a,b:\n");
	scanf("%d%d",&a,&b);

	sum = a + b;
	sub = a - b;
	multiplication = a * b;
	division = a / b;
	modulus = a % b;

	printf("Add:%d\nSub:%d\nmultiplication:%d\nDivision:%f\nModulus:%d\n",sum,sub,multiplication,division,modulus);
}

	

