#include <stdio.h>

int main() {
    int n;

    // Input number of participants
    printf("Enter number of participants: ");
    scanf("%d", &n);

    int ratings[n], duplicates = 0;

    // Input star ratings
    printf("Enter the star ratings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
    }

    // Array to mark checked ratings
    int checked[101] = {0}; // Assuming star ratings are in the range 0-100

    // Count duplicates
    for (int i = 0; i < n; i++) {
        if (checked[ratings[i]] == 1) {
            duplicates++;
        } else {
            checked[ratings[i]] = 1;
        }
    }

    printf("Number of duplicate star ratings: %d\n", duplicates);

    return 0;
}
