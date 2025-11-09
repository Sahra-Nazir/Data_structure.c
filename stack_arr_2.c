#include <stdio.h>
#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;  // Stack starts empty

// Function to check if stack is full
int isFull() {
    if (top == MAX - 1)
        return 1;  // true (stack is full)
    else
        return 0;  // false (stack not full)
}

// Function to check if stack is empty
int isEmpty() {
    if (top == -1)
        return 1;  // true (stack is empty)
    else
        return 0;  // false (stack has elements)
}

// Function to push element into stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top = top + 1;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Function to pop element from stack
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop element.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top = top - 1;
    }
}

// Function to display stack elements (without loop)
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (top to bottom): ");
        if (top == 4) printf("%d ", stack[4]);
        if (top >= 3) printf("%d ", stack[3]);
        if (top >= 2) printf("%d ", stack[2]);
        if (top >= 1) printf("%d ", stack[1]);
        if (top >= 0) printf("%d ", stack[0]);
        printf("\n");
    }
}

// Main function
int main() {
    if (isEmpty())
        printf("Yes, the stack is currently EMPTY.\n");

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // Overflow example

    if (isFull())
        printf("Now the stack is FULL.\n");

    display();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop(); // Underflow example

    if (isEmpty())
        printf("Now the stack is EMPTY again.\n");

    display();

    return 0;
}
