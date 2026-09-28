#include <stdio.h>

#define CAPACITY 5

struct Stack {
    int values[CAPACITY];
    int top;
};

static void initialize(struct Stack *stack)
{
    stack->top = -1;
}

static int push(struct Stack *stack, int value)
{
    if (stack->top == CAPACITY - 1)
        return 0;
    stack->values[++stack->top] = value;
    return 1;
}

static int pop(struct Stack *stack, int *value)
{
    if (stack->top == -1)
        return 0;
    *value = stack->values[stack->top--];
    return 1;
}

static int peek(const struct Stack *stack, int *value)
{
    if (stack->top == -1)
        return 0;
    *value = stack->values[stack->top];
    return 1;
}

int main(void)
{
    struct Stack stack;
    int value;

    initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    if (peek(&stack, &value))
        printf("Top value: %d\n", value);
    while (pop(&stack, &value))
        printf("Popped: %d\n", value);
    if (!pop(&stack, &value))
        puts("Stack is empty.");
    return 0;
}
