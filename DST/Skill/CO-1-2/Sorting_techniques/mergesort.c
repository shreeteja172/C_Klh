#include <stdio.h>

void merge(int nums[], int low, int mid, int high) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;
    int leftArr[leftSize], rightArr[rightSize];
    
    for (int i = 0; i < leftSize; i++) {
        leftArr[i] = nums[low + i];
    }
    for (int i = 0; i < rightSize; i++) {
        rightArr[i] = nums[mid + 1 + i];
    }
    
    int left = 0, right = 0, index = low;
    while (left < leftSize && right < rightSize) {
        if (leftArr[left] <= rightArr[right]) {
            nums[index++] = leftArr[left++];
        } else {
            nums[index++] = rightArr[right++];
        }
    }
    
    while (left < leftSize) {
        nums[index++] = leftArr[left++];
    }
    
    while (right < rightSize) {
        nums[index++] = rightArr[right++];
    }
}

void mergeSortHelper(int nums[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSortHelper(nums, low, mid);
    mergeSortHelper(nums, mid + 1, high); //yeh divide karta
    merge(nums, low, mid, high);
}

void mergeSort(int nums[], int size) {
    mergeSortHelper(nums, 0, size - 1);
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    printf("Original array: ");
    printArray(nums, size);
    
    mergeSort(nums, size);
    
    printf("Sorted array: ");
    printArray(nums, size);
    
    return 0;
}
