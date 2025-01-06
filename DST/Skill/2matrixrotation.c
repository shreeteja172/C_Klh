#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int rotmat[n][n];
    for(int i= 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        // printf("\n");
    }
    for(int i= 0;i<n;i++){
        for(int j = 0;j<n;j++){
            rotmat[i][j]=arr[j][i];
        }
    }
    for(int i= 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d",rotmat[i][j]);
        }
        printf("\n");
    }
    return 0;
}