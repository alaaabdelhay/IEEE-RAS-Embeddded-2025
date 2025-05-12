#include <stdio.h>
#include <stdlib.h>

struct Queue {
    char data;
    struct Queue* next;
};

void enqueue(struct Queue** front, struct Queue** rear, char value) {
    struct Queue* newNode = (struct Queue*)malloc(sizeof(struct Queue));
    newNode->data = value;
    newNode->next = NULL;

    if (*rear == NULL) {
        *front = *rear = newNode;
        return;
    }

    (*rear)->next = newNode;
    *rear = newNode;
}

char dequeue(struct Queue** front) {
    if (*front == NULL) {
        printf("Queue underflow\n");
        exit(1);
    }

    struct Queue* temp = *front;
    char dequeuedValue = temp->data;
    *front = (*front)->next;
    free(temp);

    return dequeuedValue;
}

void printQueue(struct Queue* front) {
    struct Queue* temp = front;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Queue* front = NULL;
    struct Queue* rear = NULL;

    enqueue(&front, &rear, 'A');
    enqueue(&front, &rear, 'B');
    enqueue(&front, &rear, 'C');

    printf("Queue before dequeue:\n");
    printQueue(front);

    char dequeuedValue = dequeue(&front);
    printf("Dequeued value: %c\n", dequeuedValue);

    return 0;
}
