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

void printStack(struct Stack* top) {
    struct Stack* temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void swapTopTwo(struct Stack** top) {
    if (*top == NULL || (*top)->next == NULL) {
        printf("Not enough elements to swap\n");
        return;
    }

    struct Stack* first = *top;
    struct Stack* second = first->next;

    first->next = second->next;
    second->next = first;
    *top = second;
}

int main() {
    struct Stack* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Stack before swap:\n");
    printStack(stack);

    swapTopTwo(&stack);

    printf("Stack after swap:\n");
    printStack(stack);

    return 0;
}
