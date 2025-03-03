#include <stdio.h>

int main(){

    int num,rem,rev = 0;

    printf("Enter the number you want to reverse it: ");

    scanf("%d",&num);

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    
    printf("The Reversed number is %d\n",rev);
    
    return 0;
}