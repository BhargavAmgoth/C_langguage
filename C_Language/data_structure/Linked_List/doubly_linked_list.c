#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *previous;
    struct Node *next;
};

static int append(struct Node **head, int value)
{
    struct Node *node = malloc(sizeof *node);
    struct Node *tail;

    if (node == NULL)
        return 0;
    node->data = value;
    node->previous = NULL;
    node->next = NULL;
    if (*head == NULL) {
        *head = node;
        return 1;
    }
    tail = *head;
    while (tail->next != NULL)
        tail = tail->next;
    tail->next = node;
    node->previous = tail;
    return 1;
}

static void display_forward(const struct Node *head)
{
    printf("Forward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    putchar('\n');
}

static void display_backward(const struct Node *head)
{
    if (head == NULL) {
        puts("Backward: (empty)");
        return;
    }
    while (head->next != NULL)
        head = head->next;
    printf("Backward: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->previous;
    }
    putchar('\n');
}

static void free_list(struct Node *head)
{
    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void)
{
    struct Node *head = NULL;

    if (!append(&head, 10) || !append(&head, 20) || !append(&head, 30)) {
        fputs("Could not allocate a list node.\n", stderr);
        free_list(head);
        return 1;
    }
    display_forward(head);
    display_backward(head);
    free_list(head);
    return 0;
}
