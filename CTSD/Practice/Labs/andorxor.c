#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Perform bitwise AND, OR, and XOR operations
    int andResult = num1 & num2;  // Bitwise AND
    int orResult = num1 | num2;   // Bitwise OR
    int xorResult = num1 ^ num2;  // Bitwise XOR
    
    // Print the results
    printf("\nBitwise AND of %d and %d: %d\n", num1, num2, andResult);
    printf("Bitwise OR of %d and %d: %d\n", num1, num2, orResult);
    printf("Bitwise XOR of %d and %d: %d\n", num1, num2, xorResult);
    
    return 0;
}
