/********************************************************/ /**************************************************
	37. Write a C program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%

*******************************************************/ /****************************************************/ 

#include<stdio.h>
void main()
{
	int Basic_salary, HRA, DA, Gross_salary;

	printf("Enter the salaryod an employee\n");
	scanf("%d", &Basic_salary);

	if (Basic_salary <= 10000)
	{
		HRA = Basic_salary * 0.2;
		DA = Basic_salary * 0.8;
	}

	else if (Basic_salary <= 20000)
	{
		HRA = Basic_salary * 0.25;
		DA = Basic_salary * 0.9;
	}
	
	else if (Basic_salary > 20000)
	{
		HRA = Basic_salary * 0.3;
		DA = Basic_salary * 0.95;
	}

	Gross_salary = Basic_salary + HRA + DA;
	printf("The Gross Salary of an employ is : %d\n", Gross_salary);
}
