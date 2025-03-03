#include <stdio.h>

int sum_mation(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum_mation(n - 1);
    }
}

int main() {
    int a;
    
    printf("Enter the number for summation: ");
    scanf("%d", &a);
    
    printf("Summation result: %d\n", sum_mation(a));
    
    return 0;
}
