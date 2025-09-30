// Singly Linked List Assignment - Roll No: 101

#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;              // roll number
    struct Node* next;     // pointer to next node
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at the end
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {  // if list is empty
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {  // traverse till last node
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("Roll Numbers in Linked List: ");
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert YOUR roll number first
    insertEnd(&head, 101);   // 🔁 Replace 101 with YOUR roll number

    // Insert your teammates' roll numbers
    insertEnd(&head, 102);   // Replace with teammate 1 roll number
    insertEnd(&head, 103);   // Replace with teammate 2 roll number
    insertEnd(&head, 104);   // Replace with teammate 3 roll number

    // Display the list
    displayList(head);

    return 0;
}
