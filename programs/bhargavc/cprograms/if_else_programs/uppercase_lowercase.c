#include<stdio.h>
void main()
{
	char cha;

	printf("Entrer the alphabet:\n");
	scanf("%c", &cha);

	if (cha >= 'A' && cha <= 'Z')
	{
		printf("Entrerd alphabet %c is an Uppercase\n", cha);
	}
	else if (cha >= 'a' && cha <= 'z')
	{
		printf("Entered alphabet %c is a Lowercase\n", cha);
	}
	else 
	{
		printf("Enter the vallid alphabet\n");
	}
}

