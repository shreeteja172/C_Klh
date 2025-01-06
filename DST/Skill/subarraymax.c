#include <stdio.h>
//-2, 1, -3, 4, -1, 2, 1, -5, 4
int maxsarray(int arr[],int n){
    int max = arr[0];
    int res = arr[0];
    for(int i =1;i<n;i++){
        if(max + arr[i]> arr[i]){
            res = res > max ? res:max;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr);
    for(int i = 0 ; i < n-1; i++){
        scanf("%d",&arr[i]);
    }
    maxsarray(arr,n);
    return 0;
}
    // int subarr = 0;
    // for(int i = 0;i<n;i++){
    // int maxsub = arr[0];
    //     for(int j = i ; j< n;j++){
    //         if(arr[i]>arr[j+1]){
    //             subarr = maxsub;
    //         }
    //     }
    // }
    // return subarr;