#include <stdio.h>

#define CAPACITY 5

struct Queue {
    int values[CAPACITY];
    int front;
    int rear;
    int count;
};

static void initialize(struct Queue *queue)
{
    queue->front = 0;
    queue->rear = 0;
    queue->count = 0;
}

static int enqueue(struct Queue *queue, int value)
{
    if (queue->count == CAPACITY)
        return 0;
    queue->values[queue->rear] = value;
    queue->rear = (queue->rear + 1) % CAPACITY;
    queue->count++;
    return 1;
}

static int dequeue(struct Queue *queue, int *value)
{
    if (queue->count == 0)
        return 0;
    *value = queue->values[queue->front];
    queue->front = (queue->front + 1) % CAPACITY;
    queue->count--;
    return 1;
}

int main(void)
{
    struct Queue queue;
    int value;

    initialize(&queue);
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    while (dequeue(&queue, &value))
        printf("Dequeued: %d\n", value);
    if (!dequeue(&queue, &value))
        puts("Queue is empty.");
    return 0;
}
