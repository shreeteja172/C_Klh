#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--){
        int n,ved,varun;
        scanf("%d %d %d",&n,&ved,&varun);
        int arr[n];
        for(int i = 0 ; i< n;i++){
            scanf("%d",&arr[i]);
        }
        int v1max = 0 ;
        int v2max = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > v1max) {
                v2max += v1max; 
                v1max = arr[i];
            } else {
                v2max += arr[i];
            }
        }
        int sum1 = ved + v1max ;
        int sum2 = varun + v2max;
        if(sum1>sum2){
            printf("Ved\n");
        }
        else if(sum1<sum2){
            printf("Varun\n");
        }
        else{
            printf("Equal\n");
        }
    }
}

