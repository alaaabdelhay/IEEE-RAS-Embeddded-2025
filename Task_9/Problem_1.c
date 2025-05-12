#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printListAndLength(struct Node* head) {
    int length = 0;
    struct Node* temp = head;
    printf("Train cars (linked list):\n");
    while (temp != NULL) {
        printf("[%d] -> ", temp->data);
        length++;
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Length of the train: %d\n", length);
}

int main() {
    struct Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    printListAndLength(head);
    return 0;
}

