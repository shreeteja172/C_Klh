#include <stdio.h>

int main() {
    int n, i;
    int num1 = 0, num2 = 1, numx;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i <= n; i++) {
        if (i <= 1) {
            numx = i; 
        } else {
            numx = num1 + num2; 
            num1 = num2; 
            num2 = numx;
        }
        printf("%d ", numx); 
    }

    printf("\n");
    return 0;
}