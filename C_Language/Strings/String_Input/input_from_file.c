/*
 * Way 12: Reading strings from a file (fgets / fscanf)
 *
 * - fopen() opens the file, fgets() reads it line by line,
 *   fclose() closes it.
 * - fscanf(fp, "%s", word) would read word by word instead.
 * - This program first writes a sample file so it can be run directly.
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[100];
    int line_no = 0;
    FILE *fp;

    if (argc != 2) {
        printf("Usage: %s <input-file>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Cannot open %s\n", argv[1]);
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        line[strcspn(line, "\r\n")] = '\0';
        printf("Line %d: %s\n", ++line_no, line);
    }

    fclose(fp);
    return 0;
}
