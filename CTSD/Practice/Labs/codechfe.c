#include <stdio.h>
#include <stdlib.h>

int com(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, num, sizeof(int), com);

    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
