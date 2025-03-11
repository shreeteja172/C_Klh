#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct{
    char items[MAX_SIZE];
    int top;
}Stack;

void isEmpty(Stack *s){
    return s->top == -1;
}
void init(Stack *s){
    s->top = -1;
}

void push(Stack *s, int val){
    s->items[++(s->top)] = val;
}
int pop(Stack *s){
    return s->items[(s->top)--];
}
int peek(Stack *s){
    return s->items[s->top];
}

int evaluatepostfix(char *postfix){
    Stack s;
    init(&s);
    int i,op1,op2,ans;
    for(i =0;i<postfix[i]!='\0';i++){
        char c = postfix[i];
        if(isdigit(c)){
            push(&s,c-'0');
        }
        else{
            op2 = pop(&s);
            op1 = pop(&s);
            switch(c){
                case '+':
                    push(&s,op1+op2); 
                    break;
                case '-': 
                    push(&s,op1-op2); 
                    break;
                case '*': 
                    push(&s,op1*op2); 
                    break;
                case '/': 
                    push(&s,op1/op2); 
                    break;
            }
            push(&s,ans);
        }
    }
    return pop(&s);
}

int main(){
    char postfix[MAX_SIZE];
    printf("Enter the postfix expression: ");
    scanf("%s",postfix);
    printf("Result: %d\n",evaluatepostfix(postfix));
    return 0;
}