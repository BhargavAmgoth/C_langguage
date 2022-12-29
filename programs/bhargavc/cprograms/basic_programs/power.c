#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,power;

	printf("Enter the values of a,b\n");
	scanf("%d%d",&a,&b);

	power = pow(a,b);
	printf("power of two numbers are:%d\n",power);
}

