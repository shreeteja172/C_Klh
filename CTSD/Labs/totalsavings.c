#include <stdio.h>

int main() {
    float income, expenses, totalSavings;

    printf("Enter your total income: ");
    scanf("%f", &income);

    printf("Enter your total expenses: ");
    scanf("%f", &expenses);

    totalSavings = income - expenses;

    printf("Your total savings are: %.2f\n", totalSavings);

    return 0;
}

