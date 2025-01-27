#include <stdio.h>

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }else if(right < n && arr[right ] > arr[largest]){
        largest = left;
    }
}
int main(){
    
    return 0;
}