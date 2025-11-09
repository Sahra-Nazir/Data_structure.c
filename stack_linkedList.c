#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// The top of the stack
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Check if memory allocation failed
    if (newNode == NULL) {
        printf("Stack Overflow! Memory not available.\n");
        return;
    }

    // Assign value and link the node
    newNode->data = value;
    newNode->next = top; // Point new node to previous top
    top = newNode;       // Update top
    printf("%d pushed to stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! No elements to pop.\n");
        return;
    }

    struct Node* temp = top;   // Temporary pointer to top node
    printf("%d popped from stack.\n", top->data);
    top = top->next;           // Move top to next node
    free(temp);                // Free memory of old top
}

// Function to display stack elements
void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node* temp = top;
    printf("Stack elements (top to bottom): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    display();

    pop();
    pop();
    display();

    pop();
    pop();
    pop(); // Underflow example

    display();

    return 0;
}
