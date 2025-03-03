#include <stdio.h>
#define SIZE 5
int top = -1;
int stack[SIZE];

void push() {
    if(top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        int value;
        printf("Enter the element: ");
        scanf("%d",&value);
        top = top + 1;
        stack[top] = value;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        top = top - 1;
    }
}

void peek() {
    if(top == -1) {
        printf("No element found!\n");
    } else {
        printf("Top element = %d\n", stack[top]);
    }
}

int main() {
    push();
    push();
    push();
    peek();              
    pop();       

    return 0;
}
