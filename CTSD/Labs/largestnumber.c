#include <stdio.h>

int main() {
    int n, i, num, largest_number;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The number of elements should be positive.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d", &largest_number);
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > largest_number) {
            largest_number = num;
        }
    }
    printf("The largest number is: %d\n", largest_number);

    return 0;
}