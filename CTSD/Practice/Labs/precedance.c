#include <stdio.h>
int main() {
    int a = 5, b = 6, c = 2, d = 8, result;
    result = a + a * -b / c % d + c * d;//c*d=8,,,,
    printf("%d", result);
    return 0;
}
