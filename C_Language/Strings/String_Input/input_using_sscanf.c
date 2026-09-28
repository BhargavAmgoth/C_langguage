/*
 * Way 11: fgets() + sscanf() - read a line, then parse it
 *
 * - fgets reads the whole line safely.
 * - sscanf works like scanf but reads from a string instead of the keyboard.
 * - If the line is bad, the input buffer is not left in a broken state
 *   (a common problem with plain scanf).
 *
 * Input : Ryzen 7950 4.5
 */
#include <stdio.h>

int main(void)
{
    char line[100];
    char name[50];
    int model;
    float ghz;

    printf("Enter <name> <model> <GHz>: ");
    if (fgets(line, sizeof(line), stdin) == NULL)
        return 1;

    if (sscanf(line, "%49s %d %f", name, &model, &ghz) == 3) {
        printf("Name  : %s\n", name);
        printf("Model : %d\n", model);
        printf("GHz   : %.1f\n", ghz);
    } else {
        printf("Invalid input format\n");
    }
    return 0;
}
