#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node *left;
    struct Node *right;
};

static struct Node *insert(struct Node *root, int key)
{
    if (root == NULL) {
        struct Node *node = malloc(sizeof *node);
        if (node == NULL) {
            fputs("Could not allocate a tree node.\n", stderr);
            return NULL;
        }
        node->key = key;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

static int contains(const struct Node *root, int key)
{
    while (root != NULL) {
        if (key == root->key)
            return 1;
        root = key < root->key ? root->left : root->right;
    }
    return 0;
}

static void inorder(const struct Node *root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

static void free_tree(struct Node *root)
{
    if (root != NULL) {
        free_tree(root->left);
        free_tree(root->right);
        free(root);
    }
}

int main(void)
{
    const int values[] = {50, 30, 70, 20, 40, 60, 80};
    struct Node *root = NULL;
    int i;

    for (i = 0; i < (int)(sizeof values / sizeof values[0]); i++) {
        root = insert(root, values[i]);
        if (root == NULL) {
            free_tree(root);
            return 1;
        }
    }
    printf("Inorder (sorted): ");
    inorder(root);
    putchar('\n');
    printf("Search for 40: %s\n", contains(root, 40) ? "found" : "not found");
    printf("Search for 90: %s\n", contains(root, 90) ? "found" : "not found");
    free_tree(root);
    return 0;
}
