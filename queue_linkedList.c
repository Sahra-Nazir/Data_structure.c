#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Pointers for front and rear of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Function to enqueue (insert) an element
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed! Cannot enqueue %d\n", value);
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        // Queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d enqueued into queue.\n", value);
}

// Function to dequeue (remove) an element
int dequeue() {
    if (front == NULL) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }

    struct Node* temp = front;
    int value = temp->data;
    front = front->next;

    // If front becomes NULL, queue is now empty
    if (front == NULL)
        rear = NULL;

    free(temp);
    printf("%d dequeued from queue.\n", value);
    return value;
}

// Function to display all elements in the queue
void display() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to demonstrate queue operations
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Extra dequeue to show empty case

    return 0;
}
