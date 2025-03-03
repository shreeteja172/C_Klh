#include <stdio.h>

int main() {
    int n;

    // Input number of rows
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number should not be zero or negative\n");
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = n; j > i; j--) {
                printf("  ");
            }
            for (int k = 1; k <= i; k++) {
                printf("@ ");
            }
            printf("\n");
        }
    }

    return 0;
}
