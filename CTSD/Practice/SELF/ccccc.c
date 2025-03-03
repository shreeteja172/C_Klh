#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int min_slice = 10 * n;
        int max_slice = 12 * n;

        if (k < min_slice || k > max_slice) {
            printf("NO\n");
        }

        int num12 = k / 12;
        if (num12 > n) num12 = n;
        k -= num12 * 12;

        int num11 = k / 11;
        if (num11 > n - num12) num11 = n - num12;
        k -= num11 * 11;

        int num10 = k / 10;
        if (num10 == k / 10 && num10 <= n - num12 - num11) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
