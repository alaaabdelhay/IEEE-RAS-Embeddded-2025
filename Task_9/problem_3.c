#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

int getValueAtPosition(struct Node* head, int position) {
    int count = 0;
    while (head != NULL) {
        if (count == position)
            return head->data;
        count++;
        head = head->next;
    }
    printf("Position %d out of bounds.\n", position);
    exit(1);
}

void insertAtPosition(struct Node** head, int value, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position %d out of bounds.\n", position);
            free(newNode);
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printList(head);

    int val = getValueAtPosition(head, 2);
    printf("Value at position 2: %d\n", val);

    insertAtPosition(&head, 25, 2);
    printList(head);

    return 0;
}
