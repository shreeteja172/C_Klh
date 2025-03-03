#include <stdio.h>

void duplicate_var(int arr[], int n) {
    int i, j;
    printf("Duplicate elements : \n");

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;  
            }
        }
    }
}

int main() {
    int size, i;

    printf("No. of elements : ");
    scanf("%d", &size);

    int arr[size];
 
    printf("Elements of array : \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    duplicate_var(arr, size);

    return 0;
}
