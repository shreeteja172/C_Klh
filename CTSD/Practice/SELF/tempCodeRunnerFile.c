#include <stdio.h>

int find_median(int a, int b, int c) {
    if ((a > b && a < c) || (a > c && a < b)) 
        return a;
    else if ((b > a && b < c) || (b > c && b < a)) 
        return b;
    else 
        return c;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", find_median(a, b, c));
    }
    return 0;
}
