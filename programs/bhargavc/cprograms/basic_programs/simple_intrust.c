#include<stdio.h>
void main()
{
	int Profit,Time,Rate,Simple_Intrust;
	printf("Enter the values of P,T,R:\n");
	scanf("%d%d%d",&Profit,&Time,&Rate);
	Simple_Intrust = (Profit*Time*Rate)/100;
	printf("Simple Intrust:%d\n",Simple_Intrust);
}
