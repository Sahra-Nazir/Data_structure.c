#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Define the maximum size of the queue

// Define the queue structure
struct Queue {
    int items[SIZE];
    int front;
    int rear;
};

// Function to create a queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = -1;
    return q;
}

// Check if the queue is full
int isFull(struct Queue* q) {
    return q->rear == SIZE - 1;
}

// Check if the queue is empty
int isEmpty(struct Queue* q) {
    return q->front == -1 || q->front > q->rear;
}

// Enqueue operation — add element to the rear
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue %d\n", value);
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

// Dequeue operation — remove element from the front
int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    } else {
        int item = q->items[q->front];
        q->front++;
        // Reset queue if all elements are dequeued
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
        printf("%d dequeued from queue.\n", item);
        return item;
    }
}

// Display the queue elements
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

// Main function to test the queue
int main() {
    struct Queue* q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60);  // Overflow example

    display(q);

    dequeue(q);
    dequeue(q);
    display(q);

    enqueue(q, 70);
    display(q);

    return 0;
}
