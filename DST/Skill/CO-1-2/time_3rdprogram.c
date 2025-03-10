#include <stdio.h>
void insertionsort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j] < key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void printarray(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    printf("Sorted array in descending order : \n");
    printarray(arr,n);
    return 0;
}



//p2

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

//p3
// 1. Insertion Sort
// Best Case: 
// 𝑂(𝑛)
// O(n) — When the array is already sorted, no shifts are needed.
// Worst Case: 
// 𝑂(𝑛2)
// O(n 2) — For reverse sorted arrays, it requires many shifts and comparisons.
// Average Case: 
// 𝑂(𝑛2)
// O(n 2) — Randomly shuffled arrays still require many shifts and comparisons.



// 2. Shell Sort
// Best Case: 
// 𝑂(𝑛log⁡𝑛)
// O(nlogn) — The gaps reduce the number of operations even for sorted arrays.
// Worst Case: 
// 𝑂(𝑛2)
// O(n2) — Can still be slow with poor gap sequences.
// Average Case: 
// 𝑂(𝑛3/2)
// O(n3/2) or better — Large gaps reduce operations, making it faster than Insertion Sort.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}


int main(){
    return 0;
}