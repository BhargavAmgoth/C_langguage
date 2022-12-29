/********************************************************/ /******************************************************

	Write a c program to find the LCM and GCD usin recursive function

********************************************************/ /*****************************************************/

#include<stdio.h>
int GCD_function(int, int);
void main()
{
	int LCM_function(int , int);

	int num_1, num_2;

	printf("Enter the values of any two values\n");

	scanf("%d%d", &num_1, &num_2);
	
	printf("The gcd of given two numbers %d, %d is : %d\n", num_1, num_2, GCD_function(num_1, num_2));

	printf("The lcm of the given numbes %d, %d is : %d\n", num_1, num_2, LCM_function(num_1, num_2));

}

int GCD_function(int num_1, int num_2)
{
	while(num_1 != num_2)
	{
		if (num_1 > num_2)
		{
			return GCD_function(num_1-num_2,num_2);
		}
		else
		{
			return GCD_function(num_1, num_2 - num_1);
		}
	}

	return num_1;
}

int LCM_function(int num_1, int num_2)
{
	int max;
	
	max = (num_1 > num_2) ? num_1 : num_2;
	
	if (max % num_1 == 0 && max % num_2 == 0)
	{
		return max;
	}
	else 
	{
		max += max;
		LCM_function(num_1, num_2);
		return max;
	}	
}
	
