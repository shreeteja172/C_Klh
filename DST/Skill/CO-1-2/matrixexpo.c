#include <stdio.h>
void matrixmultiply(long long A[2][2],long long B[2][2]){
    long long w = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    long long x = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    long long y = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    long long z = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    A[0][0] = w;
    A[0][1] = x;
    A[1][0] = y;
    A[1][1] = z;
    // printf("%d",A[0][0]);
}



void matrixpower(long long matrix[2][2],int power){
    long long result[2][2] = {{1,0},{0,1}};

    while(power > 0){
        if(power % 2 == 1){
            matrixmultiply(result,matrix);
        }
        matrixmultiply(matrix,matrix);
        power /= 2;
    }
    matrix[0][0] = result[0][0];
    matrix[0][1] = result[0][1];
    matrix[1][0] = result[1][0];
    matrix[1][1] = result[1][1];
}
long long fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    long long basematrix[2][2] = {{1,1},{1,0}};
    matrixpower(basematrix,n-1);

    return basematrix[0][0];
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",fibonacci(n));
    // long long A[2][2] = {(1,1),(1,0)};
    // long long B[2][2] = {(1,1),(1,0)};
    // matrixmultiply(A[2][2],B[2][2]);
    return 0;
// }



// int main(){
//     int n;
//     scanf("%d",&n);
//     int nm[2][2] = {{1,1},{0,1}};
//     int bm[2][2] = {{1,1},{0,1}};

//     for(int i =0;i<n-1;i++){
//         int x = nm[0][0] * bm[0][1] + nm[0][1] * bm[1][1];
//         int w = nm[0][0] * bm[0][0] + nm[0][1] * bm[1][0];
//         int y = nm[1][0] * bm[0][0] + nm[1][1] * bm[1][0];
//         int z = nm[1][0] * bm[0][1] + nm[1][1] * bm[1][1];
//         nm[0][0] = x;
//         nm[0][1] = y;
//         nm[1][0] = z;
//         nm[1][1] = w;
//     }
//     printf("%d",nm[0][0]);
//     return 0;
// }