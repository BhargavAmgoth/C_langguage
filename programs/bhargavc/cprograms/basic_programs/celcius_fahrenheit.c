#include<stdio.h>
void main()
{
	/***************
	float celsius, fahrenheit; 
	printf("Enter celcius temperure:\n");
	scanf("%f",&celsius);
	fahrenheit = (celsius * 9/5) + 32;
	printf("%f",fahrenheit); 
	****************/

	float celsius, fahrenheit;
	printf("Enter fahrenheit temperature\n");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32) * 5/9;
	printf("%f",celsius);

}
