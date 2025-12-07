#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertMiddle(struct Node **head, int value, int position) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node *temp = *head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, val, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &val);
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position to insert at: ");
    scanf("%d", &pos);

    insertMiddle(&head, val, pos);

    printf("\nUpdated Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

