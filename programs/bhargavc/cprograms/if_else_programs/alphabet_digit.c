#include<stdio.h>
void main()
{
	char charecter;

	printf("Enter the charecter:\n");
	scanf("%c", &charecter);

	if ((charecter >= 'A' && charecter <= 'Z') || (charecter >= 'a' && charecter <= 'z'))
	{
		printf("Entered charecter %c is an alphabet\n", charecter);
	}
	else if (charecter >= '0' && charecter <= '9')
	{
		printf("Entered charecter %c is an digit\n", charecter);
	}
	else 
	{
		printf("Enter the vallide alphbet or digit\n");
	}
}
