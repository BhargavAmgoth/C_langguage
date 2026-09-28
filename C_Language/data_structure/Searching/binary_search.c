#include <stdio.h>

static int binary_search(const int values[], int length, int target)
{
    int low = 0;
    int high = length - 1;

    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (values[middle] == target)
            return middle;
        if (values[middle] < target)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return -1;
}

int main(void)
{
    const int values[] = {3, 8, 12, 17, 25, 31, 44};
    int length = (int)(sizeof values / sizeof values[0]);
    int target = 25;
    int index = binary_search(values, length, target);

    if (index >= 0)
        printf("%d found at index %d.\n", target, index);
    else
        printf("%d was not found.\n", target);
    return 0;
}
