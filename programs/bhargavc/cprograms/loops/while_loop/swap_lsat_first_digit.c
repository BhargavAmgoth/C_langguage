/**************************************/ /******************************************

	64. Write a C program to swap first and last digits of any number.

**************************************/ /*******************************************/

#include<stdio.h>
#include<math.h>
void main()
{
	int num, first_digit, last_digit, digit, swap_num;

	printf("Enter any number\n");
	scanf("%d", &num);

	last_digit = num % 10;			 			// 12345 % 10 = 5

	digit = (int)(log10(num));					// log10(12345) = 4

        first_digit = (int) (num / (pow(10, digit)));  			// pow (10 , digit) = pow(10, 4) = 10000

	swap_num = last_digit; 						// swap = 5

	swap_num = swap_num * ((int)(round(pow(10, digit)))); 		// swap = 5 * round(pow(10, 4)) = 5 * 10000 = 50000
									
	swap_num = swap_num + ((num % (int)(round(pow(10, digit)))));   // swap = 50000 + (12345 % pow(10, 4) = 50000 + (12345 % 10000) = 50000 + 2345 = 52345

	swap_num = swap_num - last_digit; 				// swap = 52345 - 5 = 52340
									
	swap_num = swap_num + first_digit;				// swap = 52340 + 1 = 52341

	printf("Number after swapping first and last digit: %d\n", swap_num);
}
