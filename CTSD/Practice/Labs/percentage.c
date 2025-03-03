#include <stdio.h>

int main() {
    int marks[5];
    int sum = 0, i;
    float percentage;
    char grade;

    // Input marks
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    percentage = sum / 5.0;

    // Determine grade
    if (percentage >= 85) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 60) grade = 'C';
    else if (percentage >= 50) grade = 'D';
    else if (percentage >= 40) grade = 'E';
    else grade = 'F';

    printf("Percentage = %.2f Grade = %c\n", percentage, grade);

    return 0;
}
