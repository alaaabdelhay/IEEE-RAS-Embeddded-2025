#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int data;
    struct Stack* next;
};

void push(struct Stack** top, int value) {
    struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));
    newNode->data = value;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Stack** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        exit(1);
    }
    struct Stack* temp = *top;
    int poppedValue = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedValue;
}

int main() {
    struct Stack* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    int poppedValue = pop(&stack);
    printf("Popped value: %d\n", poppedValue);

    return 0;
}
