#include <stdio.h>

#define SIZEN 5
int top = -1;
int stack[SIZEN];
int isFull () {
    return top == SIZEN - 1; 
}

int isEmpty(){
    return top==-1;
}

void push(int data){
    if(!isFull()){
        top++;
        stack[top]=data;
        stack[++top]=data;
    }
}

int pop(){
    if(!isEmpty()){
        int poppeditem = stack[top];
        top--;
        return poppeditem;
    }
}
int main(){
    printf("%d\n",isEmpty());
    push(10);
    push(20);
    push(30);
    printf("%d\n",pop());
    push(40);
    push(50);
    push(60);
    printf("%d\n",isFull());
    return 0;
}