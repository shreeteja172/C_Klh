#include <stdio.h>
//using knuth gap
void shellsort(int arr[], int n) {
    int gap = 1;
    while (gap < n / 3) {
        gap = gap * 3 + 1;
    }
    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        gap /= 3; 
    }
}
void printarray(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array : \n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    shellsort(arr,n);
    printf("\nSorted array: \n");
    printarray(arr,n); 
    return 0;
    return 0;
}