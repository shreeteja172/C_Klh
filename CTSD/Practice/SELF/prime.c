#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    while (n--) {
        int arr[3];
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]); 
        printf("%d\n", arr[1]);
    }
    return 0;
}
