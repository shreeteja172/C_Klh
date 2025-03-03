#include <stdio.h>

void jump(int n) {
    if (n <= 0) {
        printf("Number should be positive and greater than zero only\n");
    } else {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
}

int main() {
    int n;

    // Input number
    scanf("%d", &n);

    jump(n);

    return 0;
}
