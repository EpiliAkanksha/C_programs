#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1, Queue[10];

int main() {
    int ch, x, i;
    while (1) {
        printf("1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: // Enqueue
                if (rear == 9) {
                    printf("Queue overflow\n");
                } else if (front == -1 && rear == -1) {
                    front = rear = 0;
                    printf("Enter the element: ");
                    scanf("%d", &x);
                    Queue[rear] = x;
                } else {
                    rear++;
                    printf("Enter the element: ");
                    scanf("%d", &x);
                    Queue[rear] = x;
                }
                break;

            case 2: // Dequeue
                if ((front == -1 && rear == -1) || (front > rear)) {
                    printf("Queue underflow\n");
                } else {
                    x = Queue[front];
                    front++;
                    printf("Element deleted: %d\n", x);
                }
                break;

            case 3: // Display
                if (front == -1 || front > rear) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements are:\n");
                    for (i = front; i <= rear; i++) {
                        printf("%d\n", Queue[i]);
                    }
                }
                break;

            case 4: // Exit
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

