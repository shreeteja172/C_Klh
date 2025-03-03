#include <stdio.h>

int factorial(int x) {
    int result = 1;  
    
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    
    return result;
}

int main() {
    int a;
    
    printf("Enter the number you want to check factorial of: ");
    scanf("%d", &a);
    
    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(a);
        
        printf("Factorial of %d is %d\n", a, fact);
    }
    
    return 0;
}
