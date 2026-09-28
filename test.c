// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_len(const char *cha);

int main() {

    // char *str;
     char arr[] = "Hi";
    char *str = malloc(strlen(arr) + 1);

    int i;
    for(i=0; arr[i] != '\0'; i++) {

        str[i] = arr[i];
    }

  str[i] = '\0';
    printf("copied string %s and original string %s \n", arr, str);
    printf("copied string %d and original string %d \n", strlen(arr), strlen(str));
    return 0;
}

