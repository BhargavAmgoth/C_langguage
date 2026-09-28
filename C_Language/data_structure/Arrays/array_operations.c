#include <stdio.h>

#define CAPACITY 10

static void display(const int values[], int length)
{
    int i;

    printf("Array: ");
    for (i = 0; i < length; i++)
        printf("%d ", values[i]);
    putchar('\n');
}

static int insert_at(int values[], int *length, int position, int value)
{
    int i;

    if (*length >= CAPACITY || position < 0 || position > *length)
        return 0;
    for (i = *length; i > position; i--)
        values[i] = values[i - 1];
    values[position] = value;
    (*length)++;
    return 1;
}

static int delete_at(int values[], int *length, int position)
{
    int i;

    if (position < 0 || position >= *length)
        return 0;
    for (i = position; i < *length - 1; i++)
        values[i] = values[i + 1];
    (*length)--;
    return 1;
}

int main(void)
{
    int values[CAPACITY] = {10, 20, 30, 40};
    int length = 4;

    display(values, length);
    if (insert_at(values, &length, 2, 25))
        printf("Inserted 25 at index 2.\n");
    display(values, length);
    if (delete_at(values, &length, 1))
        printf("Deleted the value at index 1.\n");
    display(values, length);
    return 0;
}
