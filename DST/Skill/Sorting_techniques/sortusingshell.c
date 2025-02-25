#include <stdio.h>
void shellsort(int arr[],int n){
    int gap;
    for(gap = n / 2 ; gap > 0;gap /= 2){
        for(int i = gap;i<n;i++){
            int temp = arr[i];
            int j;
            for(j = i;j >= gap && arr[j-gap]>temp;j-= gap){
                arr[j] = arr[j -gap];
            }
            arr[j] = temp;
        }
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