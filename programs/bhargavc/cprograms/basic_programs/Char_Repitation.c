#include<stdio.h>
void main()
{
	char Charecter_1, Result;
	int Number;

	printf("Enter the charecter and nmber of repitations:\n");
	scanf("%c%d",&Charecter_1,&Number);
	
	Result = (Charecter_1 * Number);

	printf("The Result is:%c\n",Result);

}
