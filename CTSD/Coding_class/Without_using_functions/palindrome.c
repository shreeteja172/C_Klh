#include <stdio.h>

int main(){

    int num,rem,res = 0,palnum;

    printf("Enter the number you want to reverse it: ");

    scanf("%d",&num);

    palnum = num;

    while (num != 0) {
        rem = num % 10;
        res = res * 10 + rem;
        num = num / 10;
    }
    
    if (palnum == res) {
        printf("%d is a palindrome.\n", palnum);
    } 
    else {
        printf("%d is not a palindrome.\n", palnum);
    }
    printf("The Reversed number is %d\n",res);
    
    return 0;
}