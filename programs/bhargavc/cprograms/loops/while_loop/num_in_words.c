/***********************************************/ /****************************************************

	71. Write a C program to enter any number and print it in words.

************************************************/ /***************************************************/


#include <stdio.h>

int main()
{
    int n, num = 0;

    /* Input number from user */
    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    /* Store reverse of n in num */
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    /* 
     * Extract last digit of number and print corresponding digit in words
     * till num becomes 0
     */
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }

	num = num / 10;
    }
}

/************
#include<stdio.h>
void main()
{
	int num, digit;

	printf("Enter any number\n");
	scanf("%d",&num);
	
	digit = 0;
	while (num != 0)
	{
		digit =  num % 10;	
		printf("Digit = %d\n", digit);
		switch (digit)
		{
			case 0:
				{
					printf("Zero ");
	 				break;
				}
	    		case 1:
				{
					printf("One ");
					break;
				}
	    		case 2:
				{
					printf("Two ");
                			break;
				}
           		case 3:
				{
			                printf("Three ");
             				break;
				}
	    		case 4:
				{
                			printf("Four ");
              			 	break;
				}
            		case 5:
				{
					printf("Five ");
					break;
				}
	    		case 6:
				{
					printf("Six ");
					break;
				}
	    		case 7:
				{
					printf("Seven ");
					break;
				}
	    		case 8:
				{
					printf("Eight ");
					break;
				}
	    		case 9:
				{
					printf("Nine ");
					break;
				}
		}
		
		num = num/10;
	
	}
} *********/
