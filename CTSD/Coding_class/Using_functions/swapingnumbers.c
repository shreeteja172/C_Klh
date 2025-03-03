#include <stdio.h>

void swapnum(int a ,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap Function = x : %d , y : %d\n", a, b);
}

int main(){
    int x, y;

    printf("Enter two number which you want to swap : ");

    scanf("%d %d", &x, &y);

    printf("Before Swap Function = x : %d , y : %d\n", x, y);

    swapnum(x, y);

    printf("After Swap Function = x : %d , y : %d\n", x, y);

    return 0;
    
}