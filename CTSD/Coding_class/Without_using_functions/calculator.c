#include <stdio.h>

int main() {
    int num1, num2;

    char operator_1;

    printf("Enter two integers: ");

    scanf("%d %d", &num1, &num2);

    printf("Choose an operation (+, -, *, /, %%): ");

    scanf(" %c", &operator_1); 

    switch (operator_1) {

        case '+':
            printf("%d + %d = %d\n",num1,num2,num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n",num1,num2,num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n",num1,num2,num1 * num2);
            break;
        case '/':
            printf("%d / %d = %d\n",num1,num2,num1 / num2);
            break;
        case '%':
            printf("%d %% %d = %d\n",num1,num2,num1 % num2);
            break;
        default:
            printf("Invalid operator! Choose in betweeen this only +, -, *, /, or %%.\n");
    }
    
    return 0;
}