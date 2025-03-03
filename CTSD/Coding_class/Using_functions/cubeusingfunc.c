#include <stdio.h>

int cube(int x);

int cube(int x){
    return x*x*x;
}
int main(){
    int number;
    scanf("%d",&number);
    int res = number;
    int res2 = cube(res);
    printf("The cube of the number is %d",res2);
    return 0;
}