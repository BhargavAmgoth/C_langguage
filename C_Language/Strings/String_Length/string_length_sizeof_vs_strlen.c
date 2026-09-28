/*
 * Common interview question: difference between sizeof and strlen.
 *
 *  sizeof  -> compile-time operator, size of the whole array in bytes
 *             (includes '\0' and unused space).
 *  strlen  -> run-time function, counts characters before '\0'.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr1[] = "AMD";        /* 'A','M','D','\0' -> 4 bytes */
    char arr2[20] = "AMD";      /* 20 bytes reserved          */
    char *ptr = "AMD";          /* pointer, not an array       */

    printf("arr1 : sizeof = %zu, strlen = %zu\n", sizeof(arr1), strlen(arr1));
    printf("arr2 : sizeof = %zu, strlen = %zu\n", sizeof(arr2), strlen(arr2));
    printf("ptr  : sizeof = %zu (pointer size), strlen = %zu\n", sizeof(ptr), strlen(ptr));
    return 0;
}

/**
 * // Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_len(char *c);

int main() {

    // char *str;
     char str[] = "Hiii";
    char arr[5] = "hsdhb";
    char *ptr = "ajdfdf";

    printf("Size %d and length %d \n", sizeof(str), strlen(str));
    printf("Size %d and length %d \n", sizeof(arr), strlen(arr));

    printf("Size %d and length %d \n", sizeof(ptr), strlen(ptr));
    
    return 0;
}
 */