#include <stdio.h>

int main(){
    int num;
    printf("Enter your number to check whether it is p/n/0 : ");

    scanf("%d", &num);

    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("The number is zero.\n");

    return 0;
}