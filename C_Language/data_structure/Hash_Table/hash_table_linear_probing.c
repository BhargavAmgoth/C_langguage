#include <stdio.h>

#define TABLE_SIZE 11

enum SlotState { EMPTY, OCCUPIED, DELETED };

struct Slot {
    int key;
    enum SlotState state;
};

static void initialize(struct Slot table[TABLE_SIZE])
{
    int i;

    for (i = 0; i < TABLE_SIZE; i++)
        table[i].state = EMPTY;
}

static int hash_key(int key)
{
    int index = key % TABLE_SIZE;
    return index < 0 ? index + TABLE_SIZE : index;
}

static int insert(struct Slot table[TABLE_SIZE], int key)
{
    int start = hash_key(key);
    int first_deleted = -1;
    int step;

    for (step = 0; step < TABLE_SIZE; step++) {
        int index = (start + step) % TABLE_SIZE;
        if (table[index].state == OCCUPIED && table[index].key == key)
            return 1;
        if (table[index].state == DELETED && first_deleted == -1)
            first_deleted = index;
        if (table[index].state == EMPTY) {
            index = first_deleted == -1 ? index : first_deleted;
            table[index].key = key;
            table[index].state = OCCUPIED;
            return 1;
        }
    }
    if (first_deleted != -1) {
        table[first_deleted].key = key;
        table[first_deleted].state = OCCUPIED;
        return 1;
    }
    return 0;
}

static int search(const struct Slot table[TABLE_SIZE], int key)
{
    int start = hash_key(key);
    int step;

    for (step = 0; step < TABLE_SIZE; step++) {
        int index = (start + step) % TABLE_SIZE;
        if (table[index].state == EMPTY)
            return 0;
        if (table[index].state == OCCUPIED && table[index].key == key)
            return 1;
    }
    return 0;
}

static int delete_key(struct Slot table[TABLE_SIZE], int key)
{
    int start = hash_key(key);
    int step;

    for (step = 0; step < TABLE_SIZE; step++) {
        int index = (start + step) % TABLE_SIZE;
        if (table[index].state == EMPTY)
            return 0;
        if (table[index].state == OCCUPIED && table[index].key == key) {
            table[index].state = DELETED;
            return 1;
        }
    }
    return 0;
}

static void display(const struct Slot table[TABLE_SIZE])
{
    int i;

    for (i = 0; i < TABLE_SIZE; i++) {
        if (table[i].state == OCCUPIED)
            printf("[%d] %d\n", i, table[i].key);
    }
}

int main(void)
{
    struct Slot table[TABLE_SIZE];
    const int keys[] = {22, 1, 13, 11, 24};
    int i;

    initialize(table);
    for (i = 0; i < (int)(sizeof keys / sizeof keys[0]); i++) {
        if (!insert(table, keys[i])) {
            puts("Hash table is full.");
            return 1;
        }
    }
    puts("Table after insertion:");
    display(table);
    printf("Search 13: %s\n", search(table, 13) ? "found" : "not found");
    delete_key(table, 13);
    printf("Search 13 after deletion: %s\n", search(table, 13) ? "found" : "not found");
    return 0;
}
