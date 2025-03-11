#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct{
    char items[MAX_SIZE];
    int top;
} Stack;

int isEmpty(Stack *s){
    return s->top == -1;
}

void init(Stack *s){
    s->top = -1;
}

void push(Stack *s, char val){
    s->items[++(s->top)] = val;
}

char pop(Stack *s){
    return s->items[(s->top)--];
}

char peek(Stack *s){
    return s->items[s->top];
}

int ismatch(char open, char close){
    if(open == '(' && close == ')') return 1;
    if(open == '{' && close == '}') return 1;
    if(open == '[' && close == ']') return 1;
    return 0;
}

int isbalanced(char *expr){
    Stack s;
    init(&s);
    int i;
    for(i = 0; i < strlen(expr); i++){
        char c = expr[i];
        if(c == '(' || c == '{' || c == '['){
            push(&s, c);
        }
        else if(c == ')' || c == '}' || c == ']'){
            if(isEmpty(&s) || !ismatch(pop(&s), c)){
                return 0;
            }
        }
    }
    return isEmpty(&s);
}

int main(){
    char expr[MAX_SIZE];
    printf("Enter the expression: ");
    scanf("%s", expr);
    if(isbalanced(expr)){
        printf("The expression is balanced\n");
    }
    else{
        printf("The expression is not balanced\n");
    }
    return 0;
}