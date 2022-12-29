#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
	struct tm *ptr;
	time_t lt;
	lt = time(NULL);
	ptr=localtime(&it);
	printf(ascitime(ptr));
getch();
}
