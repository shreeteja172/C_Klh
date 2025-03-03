#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 
}
int main() {
	// your code goes here
    int n;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    // printf("Before sorting:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", arr[i]);
    // }
    bubblesort(arr, n);
    // printf("After Sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
