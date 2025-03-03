#include <stdio.h>

int main() {
    int n, i, j, count,frequency;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of elements:\n");
    for (i = 0; i < n; i++) {

        count = 1; 
        if (arr[i] != -1) { 
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    frequency++;
                    arr[j] = -1; 
                    printf("%d",frequency);
                }
            }
            if (count == 1) {
                printf("%d is repeated 1 time\n", arr[i]);
            } else {
                printf("%d is repeated %d times\n", arr[i], count);
            }
        }
    }

    return 0;
}
