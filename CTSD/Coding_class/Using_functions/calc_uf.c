#include <stdio.h>

int add(int x,int y);
int subtract(int x,int y);
int multiply(int x,int y);
int divide(int x,int y);

int add(int x,int y){
    return x + y;
}
int subtract(int x,int y){
    return x - y;
}
int multiply(int x,int y){
    return x * y;
}

int divide(int x,int y){
    return x / y;
}

int main(){
    int num1,num2,choice;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Result: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", divide(num1, num2));
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}