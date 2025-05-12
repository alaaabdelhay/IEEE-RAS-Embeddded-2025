#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    if (position == 0) {
        newNode->next = *head;
        temp = *head;
        while (temp->next != *head)
            temp = temp->next;
        temp->next = newNode;
        *head = newNode;
        return;
    }

    for (int i = 0; i < position - 1 && temp->next != *head; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 10, 0);
    insertAtPosition(&head, 20, 1);
    insertAtPosition(&head, 30, 1);
    insertAtPosition(&head, 40, 2);
    printList(head);

    return 0;
}
