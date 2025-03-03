#include <stdio.h>
int isprime(int n){
    int count;
    if (n < 2) {
        count = 0;
    }else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                count = 0;
                break;
            }
        }
    }
    if (count)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

}
int main(){
    int n1;
    scanf("%d",&n1);
    int num = isprime(n1);
    // printf("%d",num);
    return 0;
}

