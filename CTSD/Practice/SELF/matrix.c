#include <stdio.h>

void multiplymatrix(int first[][3],int second[][3],int result[][3],int r1,int c1,int r2, int c2){
    for(int i = 0 ;i < r1;i++){
        for(int j = 0;j<c2;j++ ){
            result[i][j] = 0;
            for(int k = 0;k<c1;k++){
                result[i][k] = first[i][j] * second[j][k];
            }
        }
    }
}
int main(){
    int r1,c1,r2,c2;
    int first[3][3],second[3][3],result[3][3];
    printf("Enter the rows and column for first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and column for second matrix:\n");
    scanf("%d %d",&r2,&c2);


    if(c1!=r2){
        printf("Matrix is not possible.\n");
        return 0;
    }
    
    printf("Enter the Elements for 1st: \n");
    for(int i =0;i<r1;i++){
        for(int j = 0;j<c1;j++){
            scanf("%d %d",&first[i][j]);
        }
    }

    printf("Enter the Elements for 2nd: \n");
    for(int i =0;i<r2;i++){
        for(int j = 0;j<c2;j++){
            scanf("%d %d",&second[i][j]);
        }
    }
    multiplymatrix(first, second, result, r1, c1, r2, c2);

    printf("Result: \n");
    for(int i =0;i<r1;i++){
        for(int j = 0;j<c2;j++){
            scanf("%d %d",&result[i][j]);
        }
    }
    return 0;
}
