#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    char data[MAX_SIZE];
    int front;
    int rear;
};

void initializeQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue* q) {
    return q->front == -1;
}

int isFull(struct Queue* q) {
    return q->rear == MAX_SIZE - 1;
}

void enqueue(struct Queue* q, char value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear++;
    q->data[q->rear] = value;
}

char dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        exit(1);
    }

    char dequeuedValue = q->data[q->front];
    for (int i = 0; i < q->rear; i++) {
        q->data[i] = q->data[i + 1];
    }

    q->rear--;
    if (q->rear == -1) {
        q->front = -1;
    }

    return dequeuedValue;
}

char getFront(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        exit(1);
    }
    return q->data[q->front];
}

char getRear(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        exit(1);
    }
    return q->data[q->rear];
}

void printQueue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = q->front; i <= q->rear; i++) {
        printf("%c -> ", q->data[i]);
    }
    printf("NULL\n");
}

int main() {
    struct Queue q;
    initializeQueue(&q);

    enqueue(&q, 'A');
    enqueue(&q, 'B');
    enqueue(&q, 'C');

    printf("Queue: ");
    printQueue(&q);

    printf("Front: %c\n", getFront(&q));
    printf("Rear: %c\n", getRear(&q));

    dequeue(&q);
    printf("Queue after dequeue: ");
    printQueue(&q);

    printf("Is queue empty? %d\n", isEmpty(&q));
    printf("Is queue full? %d\n", isFull(&q));

    return 0;
}
