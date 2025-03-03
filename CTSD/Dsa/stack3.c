#include <stdio.h>
#define SIZE 5 

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
        display(); 
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow! No elements to pop\n");
    } else {
        int poppedValue = stack[top--];
        printf("%d popped from stack\n", poppedValue);
        display(); 
    } 
}
void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Elements present in stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    while (1) {
        // printf("\nChoose:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }
    return 0;
}
