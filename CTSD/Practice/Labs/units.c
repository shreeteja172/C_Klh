#include <stdio.h>

int main() {
    int units;
    float billAmount = 0.0;

    // Asking the user to enter the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        billAmount = units * 5.0;
    } else if (units <= 200) {
        billAmount = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        billAmount = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        billAmount = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }
    printf("Total electricity bill amount: Rs. %.2f\n", billAmount);

    return 0;
}
