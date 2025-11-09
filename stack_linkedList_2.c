#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Pointer to the top of the stack
struct Node* top = NULL;

// Function to check if stack is empty
int isEmpty() {
    if (top == NULL)
        return 1; // True: stack is empty
    else
        return 0; // False: stack has elements
}

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! Memory not available.\n");
        return;
    }

    newNode->data = value;
    newNode->next = top; // Link new node to old top
    top = newNode;       // Move top to new node
    printf("%d pushed to stack.\n", value);
}

// Function to pop an element from the stack
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! No elements to pop.\n");
        return;
    }

    struct Node* temp = top;
    printf("%d popped from stack.\n", top->data);
    top = top->next;
    free(temp);
}

// Function to see the top element (peek)
void peek() {
    if (isEmpty()) {
        printf("Stack is empty! No top element.\n");
    } else {
        printf("Top element is: %d\n", top->data);
    }
}

// Function to display all stack elements
void display() {
    if (isEmpty()) {
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
    if (isEmpty())
        printf("Stack is currently EMPTY.\n");

    push(10);
    push(20);
    push(30);
    push(40);

    peek();      // Show top element
    display();   // Show stack

    pop();
    peek();
    display();

    pop();
    pop();
    pop(); // This will empty the stack

    peek(); // Try to peek on empty stack
    pop();  // Underflow example

    if (isEmpty())
        printf("Stack is EMPTY again.\n");

    return 0;
}
