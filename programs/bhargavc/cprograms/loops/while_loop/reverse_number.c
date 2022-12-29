/*********************************/ /**********************************

	67. Write a C program to enter any number and print its reverse.

********************************/ /***********************************/

#include<stdio.h>
void main()
{
	int num, digit, /*rem, */reverse;
	
	printf("Enter any number\n");
	scanf("%d",&num);
	
	reverse = 0;
/*	while(num!=0){
        	rem=num%10;
        	reverse=reverse*10+rem;
        	num/=10;
    }
    printf("Reverse number %d\n",reverse);

   */

	while (num != 0)
	{
		digit = num % 10;
		
		reverse = reverse * 10 + digit;
	

		num = num / 10;
		
	}

	printf("Revers of %d is =  %d\n", num, reverse);
}
