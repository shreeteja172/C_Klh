#include <stdio.h>
int shellsort(int n,int arr[]){
    for(int gap = n/2;gap>0;gap/=2){
        for(int i = gap;i<n;i++){
            int j = i;
            int temp = arr[i];
            while(j>=gap && arr[j-1]>temp){
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++) scanf("%d",&arr[i]);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        }
    printf("\n");
    shellsort(n,arr);
    printarr(arr,n);
    return 0;
}