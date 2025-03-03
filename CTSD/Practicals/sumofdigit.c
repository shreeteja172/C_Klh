#include <stdio.h>

int main(){
    int n,s,sum = 0;
    scanf("%d",&n);
    while(n > 0){
        s = n%10;
        sum += s;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}