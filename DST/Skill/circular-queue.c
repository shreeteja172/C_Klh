#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

int menu() {
    int choice;
    printf("\n\nCircular Queue Operations, choose an option (1-6): \n");
    printf("1. Enqueue \n");
    printf("2. Dequeue \n");
    printf("3. Display \n");
    printf("4. Check if Full \n");
    printf("5. Check if Empty \n");
    printf("6. Exit \n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void enqueue(int value) {
    if ((rear + 1) % SIZE == front)
        return;
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % SIZE;
    queue[rear] = value;
}

int dequeue() {
    if (front == -1)
        return -1;
    int data = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
    return data;
}

void display() {
    if (front == -1)
        return;
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        choice = menu();
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                value = dequeue();
                if (value != -1)
                    printf("Dequeued: %d\n", value);
                else
                    printf("Queue is empty\n");
                break;
            case 3:
                display();
                break;
            case 4:
                if ((rear + 1) % SIZE == front)
                    printf("Queue is full\n");
                else
                    printf("Queue is not full\n");
                break;
            case 5:
                if (front == -1)
                    printf("Queue is empty\n");
                else
                    printf("Queue is not empty\n");
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice, try again\n");
        }
    }
    return 0;
}
