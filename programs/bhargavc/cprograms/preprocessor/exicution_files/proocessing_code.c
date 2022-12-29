/****************************************
gcc -E proocessing_code.c -o proocessing_code.i
gcc -S proocessing_code.c -o proocessing_code.s
gcc -C proocessing_code.s -o proocessing_code.o
gcc proocessing_code.c -o proocessing_code.h
	
  	For creating .i file   (creat after Pre-Procesasing, changes the text in code, so text editor. Intermediate file, include header)
	For creating .s file	(After compalation create Assembly programin file)
	For creating .o  file   (after assembler and before linking object file 1 and 0 binary language)  

	TO CREATE ALL THE FILES AT A TIME WE CAN USE THE COMMAND "gcc name_of_file.c -o name_of_file -save-temps"

*****************************************/


#include<stdio.h>
#include<math.h>
#define SIZE (100)
void main()
{
	int a, b;

	int add = 0, sub = 0, multi = 1;
       
	void *ptr1, *ptr2;
	
	ptr1 = &a;
	ptr2 =&b;

	scanf("%d%d", ptr1, ptr2);

	add = a+b;

	printf("%d\n", add);

}
