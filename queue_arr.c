#include <stdio.h>
#include <stdlib.h>

#define SIZE 5   // Maximum size of the queue

// Global variables for queue
int queue[SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to insert an element into the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }

    if (front == -1)
        front = 0;  // first element

    rear++;
    queue[rear] = value;
    printf("%d enqueued into queue.\n", value);
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }

    int value = queue[front];
    printf("%d dequeued from queue.\n", value);
    front++;

    // Reset queue if all elements are removed
    if (front > rear)
        front = rear = -1;

    return value;
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Main function to demonstrate queue operations
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();
    display();

    enqueue(60); // This will fail if queue is full
    display();

    return 0;
}
