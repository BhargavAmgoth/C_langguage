#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

static struct Node *make_node(int value)
{
    struct Node *node = malloc(sizeof *node);

    if (node != NULL) {
        node->data = value;
        node->next = NULL;
    }
    return node;
}

static int push_front(struct Node **head, int value)
{
    struct Node *node = make_node(value);

    if (node == NULL)
        return 0;
    node->next = *head;
    *head = node;
    return 1;
}

static int append(struct Node **head, int value)
{
    struct Node *node = make_node(value);
    struct Node *current;

    if (node == NULL)
        return 0;
    if (*head == NULL) {
        *head = node;
        return 1;
    }
    current = *head;
    while (current->next != NULL)
        current = current->next;
    current->next = node;
    return 1;
}

static int delete_first(struct Node **head, int value)
{
    struct Node **link = head;

    while (*link != NULL && (*link)->data != value)
        link = &(*link)->next;
    if (*link == NULL)
        return 0;
    {
        struct Node *removed = *link;
        *link = removed->next;
        free(removed);
    }
    return 1;
}

static void display(const struct Node *head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    puts("NULL");
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

    if (!append(&head, 10) || !append(&head, 20) || !push_front(&head, 5)) {
        fputs("Could not allocate a list node.\n", stderr);
        free_list(head);
        return 1;
    }
    printf("List: ");
    display(head);
    if (delete_first(&head, 10))
        puts("Deleted 10.");
    printf("List: ");
    display(head);
    free_list(head);
    return 0;
}
