#include <stdio.h>

int main() {
    int Testcase; 
    scanf("%d", &Testcase);  

    while (Testcase--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int oddCount = (N + 1) / 2;   
        int evenCount = N / 2;        

        int res;
        if (X % 2 == 0) {
            res = evenCount - 1;
        } else {
            res = oddCount - 1;
        }

        printf("%d\n", res);
    }

    return 0;
}

