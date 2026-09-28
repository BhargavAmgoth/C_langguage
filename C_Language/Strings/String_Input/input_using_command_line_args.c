/*
 * Way 8: Command-line arguments (argc / argv)
 *
 * - The strings are given when the program is started, not while it runs.
 * - argv[0] is the program name, argv[1]..argv[argc-1] are the arguments.
 * - Use quotes to pass a string with spaces.
 *
 * Run:  ./a.exe Hello "AMD Ryzen"
 * Output:
 *   argv[1] = Hello
 *   argv[2] = AMD Ryzen
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1;
    }

    printf("Number of strings: %d\n", argc - 1);
    for (i = 1; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);
    return 0;
}
