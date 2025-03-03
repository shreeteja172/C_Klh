#include <stdio.h>
int asc(int arr[],int n){
    int i,j,temp;
    for(i = 0; i< n-1;i++){
        for(j = i+1; j < n ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}
void printasc(int arr[],int n){
    int i;
    for(i = 0; i <n ; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    asc(arr,n);
    printasc(arr,n);
    return 0;
}