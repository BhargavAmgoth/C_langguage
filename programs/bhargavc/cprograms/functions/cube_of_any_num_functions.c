/**************************************************/ /***********************************************

	297. Write a C program to find cube of any number using function.

******************************************************/ /********************************************/
/*

// WITH RETURN WITHOUT ARGUMENT//

#include<stdio.h>
int cube(void);
void main()
{
	printf("The cube of the given number is: %d\n", cube());
}

int cube()
{
	int number, i, cube_result;

	printf("Enetetr any number\n");
	scanf("%d", &number);

	cube_result = number*number*number;

	return cube_result;
}
*/
/*
 
// WITHOUT RETUTRN WITHOUT ARGUMENT//

#include<stdio.h>
void cube(void);
void main()
{
        cube();
}

void cube()
{
        int number, i, cube_result;

        printf("Enetetr any number\n");
        scanf("%d", &number);

        cube_result = number*number*number;

        printf("The cube of the given value is : %d\n", cube_result);
}

*/

/*


// WITHOUT RETUTRN WITH ARGUMENT//

#include<stdio.h>
void cube(int);
void main()
{
	int number;
        cube(number);
}

void cube(int number)
{
        int i, cube_result;

        printf("Enetetr any number\n");
        scanf("%d", &number);

        cube_result = number*number*number;

        printf("The cube of the given value is : %d\n", cube_result);
}
*/

// WITH RETUTRN WITH ARGUMENT//

#include<stdio.h>
int cube(int);
void main()
{
        int number, cube_result;

	//printf("Enter any number\n");
	//scanf("%d", &number);

        //cube_result=cube(number);
	printf("The cube of the given value is : %d\n", cube(number));
}

int cube(int number)
{
        int i,cube_result;

        printf("Enetetr any number\n");
        scanf("%d", &number);

        cube_result = number*number*number;
	
	return cube_result;   
}







