#include <stdio.h>

int main(){
    int num;
    int num1 = 0, num2 = 1, numb;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i= 0;i<num;i++){
        if(i<=1){
            numb = i;
        }else{
            numb = num1 + num2;
            num1 = num2;
            num2 = numb;
        }
        printf("%d ",numb);
    }
    printf("\n");

    return 0;
}