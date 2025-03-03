#include <stdio.h>

int main() {
    int hours, minutes, total_minutes;

    printf("Enter the time in hours: ");

    scanf("%d", &hours);

    printf("Enter the time in minutes: ");

    scanf("%d", &minutes);

    total_minutes = (hours * 60) + minutes;

    printf("Total time in minutes: %d\n", total_minutes);
    
    return 0;
}

